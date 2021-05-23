/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HMINotifydObserver : HMFObject

{
    int _token;
    const char *_notificationName;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CDUnknownBlockType callback;
@property (nonatomic) int token;
@property (nonatomic, readonly) const char *notificationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (_Bool)start;
- (id)initWithNotificationName:(const char *)arg1 andQueue:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
- (void)publishValueForToken:(int)arg1;
- (void)publishInitialValue;

@end
