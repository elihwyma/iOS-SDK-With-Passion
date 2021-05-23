/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion

{
    NSString *_buildVersion;
}

@property (copy, readonly) NSString *buildVersion;

+ (_Bool)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(CDStruct_2ec95fd7)arg1;

- (id)localizedDescription;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_2ec95fd7)operatingSystemVersion;
- (id)versionString;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)initWithVersionString:(id)arg1;

@end
