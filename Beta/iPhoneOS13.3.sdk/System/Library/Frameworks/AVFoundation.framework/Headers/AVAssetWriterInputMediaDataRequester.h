/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol AVAssetWriterInputMediaDataRequesterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputMediaDataRequester : NSObject

{
    NSObject<OS_dispatch_queue> *_requestQueue;
    CDUnknownBlockType _requestBlock;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVWeakReference *_weakReferenceToDelegate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;
@property (weak) id <AVAssetWriterInputMediaDataRequesterDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)initWithRequestQueue:(id)arg1 requestBlock:(CDUnknownBlockType)arg2;
- (void)requestMediaDataIfNecessary;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;

@end
