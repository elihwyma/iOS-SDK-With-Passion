/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDDomain, FPDExtension, NSDate, NSError, NSString, NSURL;

@protocol FPDDomainIndexerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FPDDomainIndexer : NSObject

{
    NSString *_domainIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    _Bool _needsIndexing;
    _Bool _isIndexing;
    _Bool _enabled;
    _Bool _invalidated;
    _Bool _isStarted;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    _Bool _needsAuthentication;
    id <FPDDomainIndexerDelegate> _delegate;
    FPDDomain *_domain;
    FPDExtension *_extension;
}

@property (weak, nonatomic) FPDExtension *extension;
@property (nonatomic) _Bool needsAuthentication;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (weak, nonatomic) id <FPDDomainIndexerDelegate> delegate;
@property (weak, nonatomic, readonly) FPDDomain *domain;

- (id)description;
- (void)invalidate;
- (void)_cancelTimer;
- (void)indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithExtension:(id)arg1 domain:(id)arg2 enabled:(_Bool)arg3;
- (void)startWithSyncAnchor:(id)arg1;
- (_Bool)dropIndexWithError:(id *)arg1;
- (void)signalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)readNeedsIndexingFromDisk;
- (_Bool)readNeedsAuthFromDisk;
- (void)registerAnchor:(id)arg1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(_Bool)arg1;
- (void)clearNeedsAuthOnDisk;
- (void)persistsNeedsAuthOnDisk;
- (void)clearNeedsIndexingOnDisk;
- (_Bool)canContinueIndexing;
- (void)_handleOneBatchCompletionWithError:(id)arg1 hasMoreChanges:(_Bool)arg2;
- (void)dropIndexWithCompletion:(CDUnknownBlockType)arg1;
- (id)localSpotlightIndexer;
- (void)persistNeedsIndexingOnDisk;
- (void)_signalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setIndexingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
