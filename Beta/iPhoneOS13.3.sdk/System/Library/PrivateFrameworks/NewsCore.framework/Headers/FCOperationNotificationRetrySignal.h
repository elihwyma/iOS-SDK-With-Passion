/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSObject, OS_dispatch_group;

@interface FCOperationNotificationRetrySignal : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _timeoutTime;
    id <NSObject> _notificationObserver;
    NSString *_notificationName;
    double _timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (id)initWithNotificationName:(id)arg1 timeout:(double)arg2;

@end
