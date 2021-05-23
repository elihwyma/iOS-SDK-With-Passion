/*
 Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

#import <Foundation/NSObject.h>

@class CTCarrierSpaceUsagePlanItemData, CTCarrierSpaceUsagePlanItemMessages, CTCarrierSpaceUsagePlanItemVoice, NSDate, NSString;

@interface CTCarrierSpaceUsagePlanMetrics : NSObject

{
    _Bool _currentUsedPlan;
    _Bool _throttled;
    NSString *_planLabel;
    long long _planCategory;
    CTCarrierSpaceUsagePlanItemData *_dataUsage;
    CTCarrierSpaceUsagePlanItemMessages *_messages;
    CTCarrierSpaceUsagePlanItemVoice *_voice;
    NSString *_remainingBalance;
    NSDate *_lastUpdatedAt;
}

@property (retain, nonatomic) NSString *planLabel;
@property (nonatomic) long long planCategory;
@property (nonatomic) _Bool currentUsedPlan;
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemData *dataUsage;
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemMessages *messages;
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemVoice *voice;
@property (retain, nonatomic) NSString *remainingBalance;
@property (nonatomic) _Bool throttled;
@property (retain, nonatomic) NSDate *lastUpdatedAt;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
