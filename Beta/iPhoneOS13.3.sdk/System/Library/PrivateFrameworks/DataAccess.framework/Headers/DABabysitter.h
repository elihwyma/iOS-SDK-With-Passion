/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DABabysitter : NSObject

{
    NSString *_buildVersion;
    NSMutableDictionary *_refreshingWaiters;
    NSMutableDictionary *_failedWaiters;
    NSMutableDictionary *_restrictedWaiters;
}

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableDictionary *refreshingWaiters;
@property (retain, nonatomic) NSMutableDictionary *failedWaiters;
@property (retain, nonatomic) NSMutableDictionary *restrictedWaiters;

+ (id)sharedBabysitter;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (_Bool)accountWithIDShouldContinue:(id)arg1;
- (void)_reloadBabysitterProperties;
- (void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;
- (_Bool)accountShouldContinue:(id)arg1;
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (_Bool)registerAccount:(id)arg1 forOperationWithName:(id)arg2;
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;

@end
