/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CAMVideoThumbnailOutputConfiguration : NSObject

{
    NSArray *_filters;
    struct CGSize _thumbnailSize;
}

@property (nonatomic, readonly) struct CGSize thumbnailSize;
@property (nonatomic, readonly) NSArray *filters;

- (id)initWithMode:(long long)arg1;
- (id)initWithThumbnailSize:(struct CGSize)arg1 filters:(id)arg2;

@end
