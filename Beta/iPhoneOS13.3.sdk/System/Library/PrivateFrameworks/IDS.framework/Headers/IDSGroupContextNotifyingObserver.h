/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSMutableSet;

@interface IDSGroupContextNotifyingObserver : NSObject

{
    NSMutableSet *_delegates;
}

@property (retain, nonatomic) NSMutableSet *delegates;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;

@end
