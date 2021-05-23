/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMediaToken, NSString;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceStore : NSObject

{
    NSString *_clientIdentifier;
    NSString *_keychainAccessGroup;
    AMSMediaToken *_memoryMediaToken;
}

@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *keychainAccessGroup;

- (void)dealloc;
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;
- (id)_retrieveTokenFromKeychain;
- (void)_storeTokenInKeychain:(id)arg1;
- (void)_postMediaTokenChangedNotification;
- (_Bool)_hasAppleGroupEnabled;
- (id)_keychainAccessGroup;
- (struct __CFDictionary *)_keychainQuery;
- (void)_removeTokenFromKeychain;
- (id)_mediaTokenChangedNotificationName;
- (void)_mediaTokenChanged;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;
- (id)retrieveToken;
- (void)storeToken:(id)arg1;

@end
