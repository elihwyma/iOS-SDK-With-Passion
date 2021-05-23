/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface ATXNotificationContext : NSObject

{
    _Bool _stationary;
    double _notificationsReceived;
    double _notificationsEngaged;
    double _notificationsIgnored;
    double _notificationsCleared;
    double _notificationsDefAction;
    double _notificationsOrb;
    double _notificationsSuppAction;
    double _notificationsTapCoa;
    double _appLaunchPopularity;
    double _totalLaunches;
    long long _motion;
    NSString *_location;
    unsigned long long _visits;
    NSDictionary *_contentFeatures;
    NSDate *_activatedTime;
    NSDate *_unlockedTime;
}

@property (nonatomic) double notificationsReceived;
@property (nonatomic) double notificationsEngaged;
@property (nonatomic) double notificationsIgnored;
@property (nonatomic) double notificationsCleared;
@property (nonatomic) double notificationsDefAction;
@property (nonatomic) double notificationsOrb;
@property (nonatomic) double notificationsSuppAction;
@property (nonatomic) double notificationsTapCoa;
@property (nonatomic) double appLaunchPopularity;
@property (nonatomic) double totalLaunches;
@property (nonatomic) long long motion;
@property (nonatomic) _Bool stationary;
@property (retain, nonatomic) NSString *location;
@property (nonatomic) unsigned long long visits;
@property (retain, nonatomic) NSDictionary *contentFeatures;
@property (retain, nonatomic) NSDate *activatedTime;
@property (retain, nonatomic) NSDate *unlockedTime;

- (id)initFromMetadata:(id)arg1;
- (id)pbmsg;
- (id)contentFeaturesToPBContentFeatures;
- (id)serializedToMetadata;

@end
