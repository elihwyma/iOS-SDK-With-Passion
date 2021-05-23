/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PIPhotoEditAdjustmentsVersion : NSObject

{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _subMinorVersion;
    NSString *_platform;
}

@property (weak, nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;
@property (nonatomic, readonly) unsigned long long subMinorVersion;
@property (copy, nonatomic, readonly) NSString *platform;

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToAdjustmentVersion:(id)arg1;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3;
- (long long)asOrderedInteger;

@end
