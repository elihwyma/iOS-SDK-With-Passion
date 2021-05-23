/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSData;

@interface REMUserActivity : NSObject <Swift>

{
    long long _type;
    NSData *_storage;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSData *storage;

+ (_Bool)supportsSecureCoding;
+ (id)dataFromUserActivity:(id)arg1;
+ (id)stringForActivityType:(long long)arg1;
+ (void)userActivityWithUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)userActivityWithDictionaryData:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)userActivity;
- (id)userActivityData;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUniversalLink:(id)arg1;
- (id)initWithUserActivityData:(id)arg1;
- (id)universalLink;
- (id)initWithType:(long long)arg1 storage:(id)arg2;
- (id)debugDescriptionDetails;
- (id)siriIntent;
- (id)initWithSiriIntent:(id)arg1;
- (id)archivedDictionaryData;

@end
