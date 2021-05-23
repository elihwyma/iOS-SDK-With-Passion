/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateComponents, NSDictionary, NSString;

@interface STAllowance : NSObject

{
    _Bool _allowanceEnabled;
    _Bool _shouldAllowEditing;
    NSArray *_bundleIdentifiers;
    NSArray *_webDomains;
    NSArray *_categoryIdentifiers;
    NSString *_identifier;
    unsigned long long _behaviorType;
    NSDateComponents *_time;
    NSDictionary *_timeByDay;
}

@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSArray *webDomains;
@property (copy) NSArray *categoryIdentifiers;
@property _Bool allowanceEnabled;
@property (nonatomic) _Bool shouldAllowEditing;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double timeToday;
@property (nonatomic) unsigned long long behaviorType;
@property (copy, readonly) NSString *scheduleText;
@property (copy, nonatomic) NSDateComponents *time;
@property (copy, nonatomic) NSDictionary *timeByDay;

+ (double)timeIntervalForAllowanceDateComponents:(id)arg1;
+ (id)dateComponentsForDuration:(double)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultTimeByDay;
- (id)initWithBlueprint:(id)arg1;
- (id)defaultBudgetTime;

@end
