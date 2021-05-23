/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface EDInteractionEventLogSaltProvider : NSObject

{
    struct os_unfair_lock_s _lock;
    NSData *_salt;
}

@property (retain, nonatomic) NSData *salt;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)saltProviderFromKeyChain;
+ (id)saltProviderWithString:(id)arg1;

- (id)init;
- (id)_findOrCreateSalt;
- (id)_findExistingSaltError:(out id *)arg1;
- (void)_deleteSalt;
- (id)_createSalt;
- (id)_queryKeychainError:(out id *)arg1;
- (_Bool)migrateAccessClass;

@end
