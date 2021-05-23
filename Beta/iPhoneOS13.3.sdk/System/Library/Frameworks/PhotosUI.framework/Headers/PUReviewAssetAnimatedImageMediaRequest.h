/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUReviewAssetAnimatedImageMediaRequest : NSObject

{
    long long __animatedRequestID;
}

@property (nonatomic, readonly) long long _animatedRequestID;

- (void)cancelRequest;
- (id)initWithAnimatedImageRequestID:(long long)arg1;

@end
