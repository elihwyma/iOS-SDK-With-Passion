/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class NSObject, SSVPlayActivityController;

@protocol OS_dispatch_queue;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSVPlayActivityController *_playActivityController;
}

@property (nonatomic, readonly) SSVPlayActivityController *playActivityController;

- (id)init;
- (void)execute;
- (id)initWithPlayActivityController:(id)arg1;

@end
