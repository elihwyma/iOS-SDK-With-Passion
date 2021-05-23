/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CXCallObserver, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDictationTelephonyMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CXCallObserver *_callObserver;
    _Bool _telephonyActivity;
    CDUnknownBlockType _activityChanged;
}

@property (nonatomic, readonly) _Bool telephonyActivity;
@property (copy) CDUnknownBlockType activityChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)_backgroundInit;
- (void)_backgroundReset;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;

@end
