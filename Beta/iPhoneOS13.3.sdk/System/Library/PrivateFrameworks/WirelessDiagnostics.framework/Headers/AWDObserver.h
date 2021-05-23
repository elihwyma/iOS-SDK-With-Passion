/*
 Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

#import <Foundation/NSObject.h>

@protocol AWDObserverDelegate;

@interface AWDObserver : NSObject

{
    struct shared_ptr<AWDObserverConnection> observerConnection;
    id <AWDObserverDelegate> _delegate;
}

@property (weak, nonatomic) id <AWDObserverDelegate> delegate;

- (id)init;
- (id).cxx_construct;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)setConfiguration:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
