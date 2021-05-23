/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUReviewAssetLivePhotoMediaRequest : NSObject

{
    int __liveRequestID;
}

@property (nonatomic, readonly) int _liveRequestID;

- (void)cancelRequest;
- (id)initLivePhotoRequestID:(int)arg1;

@end
