/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

#import <Symbolication/Swift-Protocol.h>

@interface VMUArchitecture : NSObject <Swift>

{
    int _cpuType;
    int _cpuSubtype;
}

+ (void)initialize;
+ (id)currentArchitecture;
+ (id)anyArchitecture;
+ (id)ppcArchitecture;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)i386Architecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;
+ (id)armArchitecture;
+ (id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)is64Bit;
- (id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
- (_Bool)isLittleEndian;
- (int)cpuType;
- (int)cpuSubtype;
- (_Bool)isEqualToArchitecture:(id)arg1;
- (_Bool)is32Bit;
- (_Bool)isBigEndian;
- (_Bool)matchesArchitecture:(id)arg1;

@end
