/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSPersistentContainer;

@interface NGMReplayManager : NSObject

{
    NSPersistentContainer *_persistentContainer;
}

@property (retain) NSPersistentContainer *persistentContainer;

+ (id)sharedManager;

- (id)init;
- (_Bool)deleteReceivingCountersForKey:(id)arg1;
- (unsigned int)counterForDestinationWithIdentityKey:(id)arg1 sendingIdentity:(id)arg2 error:(id *)arg3 success:(_Bool *)arg4;
- (CDUnknownBlockType)validateIncomingCounter:(unsigned int)arg1 prekey:(id)arg2 publicIdentity:(id)arg3 error:(id *)arg4;
- (_Bool)deleteExpiredSendingDestinations;
- (id)dbNameFromProcess;
- (id)persistentStoreDescriptionWithError:(id *)arg1;
- (id)computeDestinationHashForOutgoingMessageTo:(id)arg1 withLocalKey:(id)arg2;
- (id)computeDestinationHashForIncomingMessageFrom:(id)arg1 toLocalKey:(id)arg2;
- (_Bool)processFetchRequestAndValidate:(id)arg1 counter:(unsigned int)arg2 commit:(_Bool)arg3 theirIdentity:(id)arg4 prekey:(id)arg5 error:(id *)arg6;
- (id)registeredPrekeyForNGMPrekey:(id)arg1 objectContext:(id)arg2;

@end
