/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSCache;

@protocol OS_dispatch_queue;

@interface WFActionDrawerImageLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSCache *_imageCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *imageLoadingQueue;
@property (nonatomic, readonly) NSCache *imageCache;

+ (id)sharedInstance;

- (id)init;
- (id)loadImagesForInteractionDonation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
