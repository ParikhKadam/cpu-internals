// MSR related to VMX in an enum so we can import it in IDA.

typedef enum _MSR
{
    MSR_APIC_BASE = 0x01B,

    MSR_IA32_FEATURE_CONTROL = 0x03A,

    MSR_IA32_SYSENTER_CS = 0x174,
    MSR_IA32_SYSENTER_ESP = 0x175,
    MSR_IA32_SYSENTER_EIP = 0x176,

    MSR_IA32_DEBUGCTL = 0x1D9,

    kIa32MtrrCap = 0xFE,
    kIa32MtrrDefType = 0x2FF,
    kIa32MtrrPhysBaseN = 0x200,
    kIa32MtrrPhysMaskN = 0x201,
    kIa32MtrrFix64k00000 = 0x250,
    kIa32MtrrFix16k80000 = 0x258,
    kIa32MtrrFix16kA0000 = 0x259,
    kIa32MtrrFix4kC0000 = 0x268,
    kIa32MtrrFix4kC8000 = 0x269,
    kIa32MtrrFix4kD0000 = 0x26A,
    kIa32MtrrFix4kD8000 = 0x26B,
    kIa32MtrrFix4kE0000 = 0x26C,
    kIa32MtrrFix4kE8000 = 0x26D,
    kIa32MtrrFix4kF0000 = 0x26E,
    kIa32MtrrFix4kF8000 = 0x26F,

    MSR_IA32_VMX_BASIC = 0x480,
    MSR_IA32_VMX_PINBASED_CTLS = 0x481,
    MSR_IA32_VMX_PROCBASED_CTLS = 0x482,
    MSR_IA32_VMX_EXIT_CTLS = 0x483,
    MSR_IA32_VMX_ENTRY_CTLS = 0x484,
    MSR_IA32_VMX_MISC = 0x485,
    MSR_IA32_VMX_CR0_FIXED0 = 0x486,
    MSR_IA32_VMX_CR0_FIXED1 = 0x487,
    MSR_IA32_VMX_CR4_FIXED0 = 0x488,
    MSR_IA32_VMX_CR4_FIXED1 = 0x489,
    MSR_IA32_VMX_VMCS_ENUM = 0x48A,
    MSR_IA32_VMX_PROCBASED_CTLS2 = 0x48B,
    MSR_IA32_VMX_EPT_VPID_CAP = 0x48C,
    MSR_IA32_VMX_TRUE_PINBASED_CTLS = 0x48D,
    MSR_IA32_VMX_TRUE_PROCBASED_CTLS = 0x48E,
    MSR_IA32_VMX_TRUE_EXIT_CTLS = 0x48F,
    MSR_IA32_VMX_TRUE_ENTRY_CTLS = 0x490,
    MSR_IA32_VMX_VMFUNC = 0x491,

    MSR_IA32_CR_PAT = 0x277,
    
    MSR_CORE_PERF_FIXED_CTR0 = 0x00000309,
    MSR_CORE_PERF_FIXED_CTR1 = 0x0000030a,
    MSR_CORE_PERF_FIXED_CTR2 = 0x0000030b,
    MSR_CORE_PERF_FIXED_CTR_CTRL = 0x0000038d,
    MSR_CORE_PERF_GLOBAL_STATUS = 0x0000038e,
    MSR_CORE_PERF_GLOBAL_CTRL = 0x0000038f,
    MSR_CORE_PERF_GLOBAL_OVF_CTRL = 0x00000390,


    MSR_EFER = 0xC0000080,
    MSR_STAR = 0xC0000081,
    MSR_LSTAR = 0xC0000082,
    MSR_CSTAR = 0xC0000083,
    MSR_SYSCALL_MASK = 0xC0000084,
    MSR_FS_BASE = 0xC0000100,
    MSR_GS_BASE = 0xC0000101,
    MSR_KERNEL_GS_BASE = 0xC0000102,
    MSR_TSC_AUX = 0xC0000103,

} MSR;
