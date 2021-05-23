/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class FLFollowUpAction, NSDate, NSSet, NSString;

@interface FLFollowUpNotification : NSObject

{
    NSString *_title;
    NSString *_informativeText;
    NSDate *_creationDate;
    FLFollowUpAction *_activateAction;
    FLFollowUpAction *_clearAction;
    NSString *_unlockActionLabel;
    double _frequency;
    double _firstNotificationDelay;
    NSSet *_options;
    unsigned long long _sqlID;
    NSDate *_previousNotificationActionDate;
    FLFollowUpAction *_dismissAction;
}

@property (nonatomic) unsigned long long sqlID;
@property (retain, nonatomic) NSDate *previousNotificationActionDate;
@property (retain, nonatomic) FLFollowUpAction *dismissAction;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (retain, nonatomic) FLFollowUpAction *activateAction;
@property (retain, nonatomic) FLFollowUpAction *clearAction;
@property (copy, nonatomic) NSString *unlockActionLabel;
@property (nonatomic) double frequency;
@property (nonatomic) double firstNotificationDelay;
@property (copy, nonatomic) NSSet *options;
@property (nonatomic) _Bool forceDelivery;

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptions;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_optionsData;
- (_Bool)_shouldDeliverNotificationWithStringOut:(id *)arg1;
- (double)_frequencyDelta;
- (double)_creationDateAugmentedRepeatTimer;
- (_Bool)shouldDeliverNotification;
- (void)set_optionsData:(id)arg1;
- (void)recalculateActionDateToAccountForDelay;

@end
