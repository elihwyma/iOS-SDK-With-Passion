/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTSweetgumUsagePlanItemData, CTSweetgumUsagePlanItemMessages, CTSweetgumUsagePlanItemVoice, NSDate, NSString;

@interface CTSweetgumUsagePlanMetrics : NSObject

{
    _Bool _currentUsedPlan;
    _Bool _throttled;
    NSString *_planLabel;
    long long _planCategory;
    CTSweetgumUsagePlanItemData *_dataUsage;
    CTSweetgumUsagePlanItemMessages *_messages;
    CTSweetgumUsagePlanItemVoice *_voice;
    NSString *_remainingBalance;
    NSDate *_lastUpdatedAt;
}

@property (retain, nonatomic) NSString *planLabel;
@property (nonatomic) long long planCategory;
@property (nonatomic) _Bool currentUsedPlan;
@property (retain, nonatomic) CTSweetgumUsagePlanItemData *dataUsage;
@property (retain, nonatomic) CTSweetgumUsagePlanItemMessages *messages;
@property (retain, nonatomic) CTSweetgumUsagePlanItemVoice *voice;
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
