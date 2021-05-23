/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SRDaemonNotificationDelegate;

@interface SRDaemonNotification : NSObject

{
    int _registrationToken;
    int _significantTimeChangeToken;
    id <SRDaemonNotificationDelegate> _delegate;
    NSString *_sensorIdentifier;
}

@property (copy, nonatomic) NSString *sensorIdentifier;
@property (weak, nonatomic) id <SRDaemonNotificationDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (void)registerForDaemonNotification;
- (void)unregisterForDaemonNotification;
- (id)initWithSensor:(id)arg1;

@end
