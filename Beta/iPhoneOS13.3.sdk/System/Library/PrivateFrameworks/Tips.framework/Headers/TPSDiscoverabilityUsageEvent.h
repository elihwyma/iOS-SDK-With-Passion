/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface TPSDiscoverabilityUsageEvent : NSObject

{
    NSString *_contentIdentifier;
    NSString *_bundleIdentifier;
    unsigned long long _displayType;
    long long _state;
    long long _ineligibleReason;
    NSArray *_eligibleContext;
    NSString *_context;
    NSDate *_date;
}

@property (copy, nonatomic) NSString *contentIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) long long state;
@property (nonatomic) long long ineligibleReason;
@property (copy, nonatomic) NSArray *eligibleContext;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSDate *date;

+ (id)eligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 eligibleContext:(id)arg4 date:(id)arg5;
+ (id)hintDisplayedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5;
+ (id)contentViewedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 date:(id)arg4;
+ (id)ineligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 reason:(long long)arg5 date:(id)arg6;
+ (id)performedOutcomeEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5;
+ (id)_eventWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7;

- (id)debugDescription;
- (id)initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7;

@end
