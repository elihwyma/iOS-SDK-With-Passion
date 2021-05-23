/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject

{
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
    _Bool _enforceDataLimits;
    _Bool _enforcePrivacy;
}

@property _Bool enforceDataLimits;
@property _Bool enforcePrivacy;

+ (id)interactionRecorder;

- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)recordInteractions:(id)arg1;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id *)arg2;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)recordInteraction:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)recordInteractions:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)countInteractionsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryContactsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)countContactsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 account:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 domainIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
