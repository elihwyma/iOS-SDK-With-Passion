/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class AVApplePortraitMetadata, NSString;

@interface PFCameraAdjustments : NSObject

{
    NSString *_effectFilterName;
    NSString *_portraitEffectFilterName;
    AVApplePortraitMetadata *_portraitMetadata;
    _Bool _depthEnabled;
    struct CGRect _cropRect;
}

@property (copy, nonatomic, readonly) NSString *effectFilterName;
@property (copy, nonatomic, readonly) NSString *portraitEffectFilterName;
@property (nonatomic, readonly) AVApplePortraitMetadata *portraitMetadata;
@property (nonatomic, readonly, getter=isDepthEnabled) _Bool depthEnabled;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) _Bool hasCrop;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdjustments:(id)arg1;

@end
