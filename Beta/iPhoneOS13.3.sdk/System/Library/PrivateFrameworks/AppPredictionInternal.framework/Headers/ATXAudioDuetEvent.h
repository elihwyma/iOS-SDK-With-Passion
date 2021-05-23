/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSNumber, NSString;

@interface ATXAudioDuetEvent : ATXDuetEvent

{
    long long _audioState;
    NSString *_deviceIdentifier;
    NSString *_portType;
    NSString *_portName;
    NSNumber *_routeChangeReason;
}

@property (nonatomic, readonly) long long audioState;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) NSString *portName;
@property (nonatomic, readonly) NSNumber *routeChangeReason;

- (id)description;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithAudioState:(long long)arg1 deviceIdentifier:(id)arg2 portType:(id)arg3 portName:(id)arg4 routeChangeReason:(id)arg5 startDate:(id)arg6 endDate:(id)arg7;

@end
