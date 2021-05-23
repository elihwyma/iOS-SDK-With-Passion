/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSString;

@interface HMFVersion

{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _updateVersion;
}

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long updateVersion;
@property (copy, readonly) NSString *versionString;
@property (copy, readonly) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (_Bool)isEqualToVersion:(id)arg1;
- (id)initWithVersionString:(id)arg1;
- (_Bool)isAtLeastVersion:(id)arg1;
- (_Bool)isGreaterThanVersion:(id)arg1;

@end
