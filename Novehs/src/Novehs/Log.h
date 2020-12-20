#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"


namespace Novehs
{
	class NOVEHS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core log macros
#define NVS_CORE_TRACE(...) ::Novehs::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NVS_CORE_INFO(...) ::Novehs::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NVS_CORE_WARN(...) ::Novehs::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NVS_CORE_ERROR(...) ::Novehs::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NVS_CORE_FATAL(...) ::Novehs::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log Macros

#define NVS_TRACE(...) ::Novehs::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NVS_INFO(...) ::Novehs::Log::GetClientLogger()->info(__VA_ARGS__)
#define NVS_WARN(...) ::Novehs::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NVS_ERROR(...) ::Novehs::Log::GetClientLogger()->error(__VA_ARGS__)
#define NVS_FATAL(...) ::Novehs::Log::GetClientLogger()->fatal(__VA_ARGS__)
