/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripNotificationRules : NSObject

{
    _Bool _hasMadeFinalPush;
    unsigned long long _maxPostedNotifications;
    unsigned long long _postedNotifcations;
    double _minimumETADifference;
    double _minimumNotificationInterval;
    NSDate *_lastPostedETADate;
    NSDate *_lastPostedNotificationDate;
    NSDate *_lastUpdatedDate;
    NSDate *_currentETADate;
}

@property (nonatomic) unsigned long long maxPostedNotifications;
@property (nonatomic) unsigned long long postedNotifcations;
@property (nonatomic) double minimumETADifference;
@property (nonatomic) double minimumNotificationInterval;
@property (retain, nonatomic) NSDate *lastPostedETADate;
@property (retain, nonatomic) NSDate *lastPostedNotificationDate;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSDate *currentETADate;
@property (nonatomic) _Bool hasMadeFinalPush;
@property (nonatomic, readonly) unsigned long long currentlyNecessaryNotificationType;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivingObjectsSet;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 minimumNotificationInterval:(double)arg2;
- (void)incrementMinimumETADiffernce;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1;
- (void)didPostNotification;
- (void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2;
- (double)minimumETADifferenceIncrement;

@end
