/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHImageDisplaySpec : NSObject

{
    long long _contentMode;
    struct CGSize _targetSize;
    struct CGRect _normalizedCropRect;
}

@property (nonatomic) long long contentMode;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic) struct CGRect normalizedCropRect;

- (id)init;
- (id)description;
- (id)shortDescription;
- (id)initWithTargetSize:(struct CGSize)arg1;
- (id)initWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2;
- (id)initWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(struct CGRect)arg3;
- (_Bool)hasExplicitCrop;
- (struct CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2;
- (_Bool)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2;

@end
