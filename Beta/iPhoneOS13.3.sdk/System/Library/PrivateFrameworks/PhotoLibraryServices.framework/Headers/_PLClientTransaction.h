/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@class NSObject, NSSet, NSString;

@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction : PLClientServerTransaction

{
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
    int _fileDescriptor;
    id _processAssertion;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_fdResourceSemaphore;
    NSString *_changeScopesDescriptionSnapshot;
}

@property (nonatomic) int fileDescriptor;
@property (retain, nonatomic) id processAssertion;
@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (copy) NSString *changeScopesDescriptionSnapshot;

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;

- (void)dealloc;
- (id)description;
- (id)initWithPathManager:(id)arg1;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)persistTransactionScopes:(id)arg1;
- (void)addChangeScopes:(id)arg1;
- (void)pushChangeScopesBatch;
- (void)popChangeScopesBatch;
- (_Bool)isClientTransaction;
- (id)changeScopes;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)abortTransaction;
- (id)generateChangeScopesDescription;

@end
