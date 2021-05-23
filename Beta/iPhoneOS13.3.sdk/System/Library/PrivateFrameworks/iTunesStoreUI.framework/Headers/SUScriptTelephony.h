/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptTelephony : SUScriptObject

@property (nonatomic, readonly, getter=isCellularRoaming) id cellularRoaming;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *operatorName;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *providerName;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)formattedPhoneNumber:(id)arg1;
- (void)_handleOperatorNameChangedNotification:(id)arg1;
- (void)_handlePhoneNumberChangedNotification:(id)arg1;
- (void)_handleRegistrationChangedNotification:(id)arg1;
- (_Bool)_checkIfIsAllowed;
- (id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3;

@end
