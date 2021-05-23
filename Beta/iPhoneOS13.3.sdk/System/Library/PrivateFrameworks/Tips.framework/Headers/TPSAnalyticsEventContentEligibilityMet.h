/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSArray, NSString;

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_bundleID;
    NSArray *_eligibleContext;
    unsigned long long _displayType;
}

@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSArray *eligibleContext;
@property (nonatomic, readonly) unsigned long long displayType;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 date:(id)arg5;
- (id)duetEvent;

@end
