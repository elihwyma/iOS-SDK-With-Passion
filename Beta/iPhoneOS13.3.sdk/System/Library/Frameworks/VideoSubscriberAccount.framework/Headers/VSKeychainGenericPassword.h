/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainGenericPassword : VSKeychainItem

@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) NSDate *modificationDate;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSNumber *creatorCode;
@property (copy, nonatomic) NSNumber *typeCode;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, getter=isSynchronizable) _Bool synchronizable;
@property (nonatomic, getter=isInvisible) _Bool invisible;
@property (nonatomic, getter=isNegative) _Bool negative;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *generic;

- (id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1;
- (void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2;

@end
