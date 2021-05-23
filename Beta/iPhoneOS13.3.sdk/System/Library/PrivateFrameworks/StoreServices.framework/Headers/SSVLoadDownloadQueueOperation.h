/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, NSMutableArray, NSMutableOrderedSet, NSNumber, NSString, NSURL, SSURLRequestProperties;

@interface SSVLoadDownloadQueueOperation : SSVComplexOperation

{
    NSNumber *_accountIdentifier;
    NSMutableOrderedSet *_downloads;
    _Bool _needsAuthentication;
    NSMutableArray *_rangesToLoad;
    long long _reason;
    NSString *_requestIdentifier;
    SSURLRequestProperties *_requestProperties;
    NSString *_mdSyncState;
    NSLock *_lock;
    NSURL *_requestURL;
    NSString *_powerAssertionIdentifier;
    NSString *_storeCorrelationID;
}

@property (readonly) SSURLRequestProperties *requestProperties;
@property (retain) NSNumber *accountIdentifier;
@property _Bool needsAuthentication;
@property long long reason;
@property (copy) NSString *requestIdentifier;
@property (copy, nonatomic) NSURL *requestURL;
@property (readonly) NSMutableOrderedSet *downloads;
@property (retain) NSString *powerAssertionIdentifier;
@property (copy, nonatomic) NSString *storeCorrelationID;

+ (id)newLoadAutomaticDownloadQueueOperation;

- (id)init;
- (void)lock;
- (void)unlock;
- (void)main;
- (id)_account;
- (id)initWithRequestProperties:(id)arg1;
- (id)resolveBagURLForKey:(id)arg1 bagContext:(id)arg2 error:(id *)arg3;
- (_Bool)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 url:(id)arg3;
- (id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 url:(id)arg3;
- (void)importKeybagSync:(id)arg1;
- (void)_handleResponse:(id)arg1;
- (void)addGUIDToBody:(id)arg1;
- (void)addKeybagSyncToBody:(id)arg1;
- (_Bool)featureEnabledForBagKey:(id)arg1 bagContext:(id)arg2 error:(id *)arg3;
- (id)gzipData:(id)arg1;
- (void)setDownloadsMetadata:(id)arg1;

@end
