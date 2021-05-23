/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSString;

@interface IPAAdjustmentVersion : NSObject

{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_platform;
}

@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;
@property (nonatomic, readonly) NSString *platform;

+ (void)initialize;
+ (id)validatePlatformString:(id)arg1;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
+ (id)versionFromArchivalRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (long long)compare:(id)arg1;
- (void)setMinorVersion:(unsigned long long)arg1;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
- (id)archivalRepresentation;
- (_Bool)isEqualToAdjustmentVersion:(id)arg1;

@end
