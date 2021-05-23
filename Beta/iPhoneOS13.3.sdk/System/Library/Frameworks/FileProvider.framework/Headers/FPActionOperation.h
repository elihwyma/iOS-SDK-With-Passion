/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class FPItem, FPItemManager, FPService, FPStitchingSession, NSArray, NSDictionary, NSProgress, NSString;

@protocol FPXOperationService;

@interface FPActionOperation

{
    NSDictionary *_itemsByDomainID;
    NSString *_providerIdentifier;
    _Bool _multiProviders;
    unsigned long long _logSection;
    FPStitchingSession *_stitcher;
    unsigned long long _attemptedRecoveryCount;
    _Bool _finishAfterPreflight;
    _Bool _skipPreflight;
    _Bool _setupRemoteOperationService;
    _Bool _haveErrorRecovery;
    _Bool _havePreflight;
    _Bool _haveStitching;
    CDUnknownBlockType _placeholdersCreationBlock;
    CDUnknownBlockType _actionCompletionBlock;
    NSProgress *_progress;
    CDUnknownBlockType _errorRecoveryHandler;
    FPItemManager *_itemManager;
    FPService<FPXOperationService> *_remoteService;
    NSString *_action;
    NSArray *_sourceItemsToPreflight;
    FPItem *_destinationItemToPreflight;
}

@property (retain, nonatomic) FPItemManager *itemManager;
@property (nonatomic, readonly) FPStitchingSession *stitcher;
@property (retain, nonatomic) FPService<FPXOperationService> *remoteService;
@property (nonatomic, readonly) id <FPXOperationService> remoteServiceProxy;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) _Bool setupRemoteOperationService;
@property (nonatomic) _Bool haveErrorRecovery;
@property (nonatomic) _Bool havePreflight;
@property (nonatomic) _Bool haveStitching;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *sourceItemsToPreflight;
@property (copy, nonatomic) FPItem *destinationItemToPreflight;
@property (nonatomic) _Bool finishAfterPreflight;
@property (nonatomic) _Bool skipPreflight;
@property (copy, nonatomic) CDUnknownBlockType placeholdersCreationBlock;
@property (copy, nonatomic) CDUnknownBlockType actionCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType errorRecoveryHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)operationDescription;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProvider:(id)arg1 action:(id)arg2;
- (void)actionMain;
- (void)presendNotifications;
- (void)resetStitcher;
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;
- (void)tryRecoveringFromError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryRecoveringFromPreflightErrors:(id)arg1 recoveryHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subclassPreflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)replicateForItems:(id)arg1;
- (void)_runUserInteractionsPreflight:(CDUnknownBlockType)arg1;
- (void)_dispatchToSubOperations;
- (void)_preflightAndRun;

@end
