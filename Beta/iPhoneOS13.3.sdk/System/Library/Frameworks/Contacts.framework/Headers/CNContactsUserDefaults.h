/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property (nonatomic) _Bool shortNameFormatPrefersNicknames;
@property (nonatomic, readonly) long long sortOrder;
@property (copy, nonatomic, readonly) NSString *countryCode;

+ (id)sharedDefaults;
+ (void)flushSharedInstance;

- (id)init;
- (id)changeNotificationName;
- (long long)newContactDisplayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;

@end
