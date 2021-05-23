/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface TUNotifyObserver : NSObject

{
    int _token;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_notificationName;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType callback;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, getter=isObserving) _Bool observing;

- (void)dealloc;
- (void)_endObserving;
- (void)beginObserving;
- (void)endObserving;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2;

@end
