/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNUserDefaults, NSDictionary, NSString;

@interface CNFoundationUserDefaults : NSObject

{
    CNUserDefaults *_userDefaults;
}

@property (retain) CNUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool preferNickname;
@property unsigned long long nameOrder;
@property unsigned long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;

+ (id)sharedDefaults;
+ (id)registeredDefaults;
+ (id)makeRegisteredDefaults;
+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1;

- (id)init;
- (id)countryCode;
- (unsigned long long)sortOrder;
- (unsigned long long)newContactNameOrder;

@end
