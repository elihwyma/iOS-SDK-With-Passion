/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption

{
    _Bool _isDefaultPhoto;
    NSString *_path;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) _Bool isDefaultPhoto;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
