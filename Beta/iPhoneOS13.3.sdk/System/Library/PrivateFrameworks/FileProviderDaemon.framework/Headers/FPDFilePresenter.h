/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDDomain, FPDExtensionManager, FPItem, FPItemID, NSData, NSString, NSURL;

@protocol FPXEnumerator, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDFilePresenter : NSObject

{
    FPDExtensionManager *_manager;
    id <FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    FPDDomain *_domain;
    NSData *_changeToken;
    FPItemID *_observedItemID;
    FPItem *_currentItem;
    _Bool _isFetchingChanges;
    _Bool _shouldRefetchChanges;
    _Bool _presenterWantsUbiqitousAttributes;
    _Bool _isEnumeratorActive;
    _Bool _isFrontmost;
    int _requestEffectivePID;
    int _presenterPid;
    id _filePresenterID;
    FPItemID *_itemID;
    NSURL *_presentedItemURL;
}

@property (retain, nonatomic) FPItemID *itemID;
@property (copy, nonatomic) id filePresenterID;
@property (nonatomic) int presenterPid;
@property (nonatomic) _Bool isEnumeratorActive;
@property (nonatomic) _Bool isFrontmost;
@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (retain, nonatomic) FPDDomain *domain;
@property (nonatomic, readonly) FPItemID *observedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) NSString *prettyDescription;

+ (id)presenter:(id)arg1 withItemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (void)stop;
- (void)start;
- (id)enumerator;
- (void)enumerationResultsDidChange;
- (void)dumpStateTo:(id)arg1;
- (void)didUpdateItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 itemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;
- (id)_presentedItemDescription:(_Bool)arg1;
- (void)_fetchChangeToken;
- (void)_destroyEnumerator;
- (id)_newCoordinator;
- (void)_fetchUpdates;
- (void)receiveUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)_enumeratorRequestDidFailWithXPCError:(id)arg1 section:(unsigned long long)arg2;
- (void)becomeFrontmost:(_Bool)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
