/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@protocol OS_dispatch_queue;

@interface ACPersonaManager : NSObject

{
    NSObject<OS_dispatch_queue> *_backgroundPersonaUpdate;
    _Bool _registered;
    NSString *_enterprisePersonaUID;
    NSString *_personalPersonaUID;
    ACAccountStore *_store;
}

@property (copy, nonatomic, readonly) NSString *enterprisePersonaUID;
@property (copy, nonatomic, readonly) NSString *personalPersonaUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)performWithinPersonaForAccount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (_Bool)performWithinPersona:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)_changePersonaContextUsingPersonaID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (id)store;
- (void)personaListDidUpdate;
- (void)updateEnterprisePersona;
- (void)_registerForPersonaListUpdateWithCompletion:(CDUnknownBlockType)arg1;

@end
