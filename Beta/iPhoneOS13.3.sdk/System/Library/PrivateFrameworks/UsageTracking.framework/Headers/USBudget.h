/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface USBudget : NSObject

{
    NSString *_identifier;
    NSSet *_categoryIdentifiers;
    NSSet *_bundleIdentifiers;
    NSSet *_webDomains;
    NSString *_calendarIdentifier;
    NSDictionary *_schedule;
    long long _type;
}

@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSSet *categoryIdentifiers;
@property (copy, readonly) NSSet *bundleIdentifiers;
@property (copy, readonly) NSSet *webDomains;
@property (copy, readonly) NSString *calendarIdentifier;
@property (copy, readonly) NSDictionary *schedule;
@property (readonly) long long type;
@property (copy, readonly) NSSet *items;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategories:(id)arg1 applications:(id)arg2 webDomains:(id)arg3 schedule:(id)arg4 calendarIdentifier:(id)arg5 identifier:(id)arg6;
- (id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5;

@end
