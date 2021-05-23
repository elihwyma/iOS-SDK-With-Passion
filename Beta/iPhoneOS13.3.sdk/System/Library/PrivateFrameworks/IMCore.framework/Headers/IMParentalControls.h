/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMParentalControls : NSObject

{
    _Bool _shouldPostNotifications;
    _Bool _active;
    _Bool _disableAV;
    _Bool _forceChatLogging;
    NSMutableDictionary *_parentalControls;
}

@property (nonatomic, readonly) NSMutableDictionary *_parentalControls;
@property (nonatomic, readonly) _Bool _disableAV;
@property (nonatomic, readonly) _Bool _forceChatLogging;
@property (nonatomic, readonly) _Bool active;
@property (nonatomic, readonly) _Bool disableAV;
@property (nonatomic, readonly) _Bool forceChatLogging;
@property (nonatomic) _Bool shouldPostNotifications;

+ (id)objectForKey:(id)arg1;
+ (id)standardControls;

- (id)init;
- (void)dealloc;
- (_Bool)disableAccount:(id)arg1;
- (_Bool)disableService:(id)arg1;
- (_Bool)okToConnectAccount:(id)arg1;
- (void)_updateParentalSettings;
- (void)_managedPrefsNotification:(id)arg1;
- (id)_serviceWithName:(id)arg1;
- (id)whitelistForService:(id)arg1;
- (_Bool)forceWhitelistForService:(id)arg1;
- (_Bool)accountIsEnabled:(id)arg1;
- (id)whitelistForAccount:(id)arg1;
- (_Bool)forceWhitelistForAccount:(id)arg1;
- (_Bool)accountHasWhitelist:(id)arg1;

@end
