/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface HKCoreTelephonyUtilities : NSObject

{
    struct __CTServerConnection *_ctServerConnection;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue;

- (id)init;
- (void)dealloc;
- (struct __CTServerConnection *)ctServerConnection;
- (_Bool)isEmergencyServicePhoneNumber:(id)arg1;

@end
