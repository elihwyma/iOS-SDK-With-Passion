/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/_PLClientTransaction.h>

@class NSCountedSet, NSObject;

@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction

{
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)dealloc;
- (id)initWithPathManager:(id)arg1;
- (void)addChangeScopes:(id)arg1;
- (void)pushChangeScopesBatch;
- (void)popChangeScopesBatch;
- (_Bool)isClientTransaction;
- (id)changeScopes;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)abortTransaction;
- (id)generateChangeScopesDescription;
- (void)_enqueueChangeScopes:(id)arg1;

@end
