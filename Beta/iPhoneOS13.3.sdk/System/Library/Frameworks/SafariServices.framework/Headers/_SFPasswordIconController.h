/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, WBSCache, _SFSiteMetadataManager;

@protocol OS_dispatch_queue, _SFPasswordIconControllerDelegate;

@interface _SFPasswordIconController : NSObject

{
    WBSCache *_iconCache;
    NSMutableDictionary *_domainsToExtractedBackgroundColors;
    NSMutableSet *_touchIconRequests;
    NSMutableDictionary *_domainToItems;
    NSMutableSet *_domainsThatHaveRequestedIcon;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSObject<OS_dispatch_queue> *_queue;
    _SFSiteMetadataManager *_metadataManager;
    NSMutableDictionary *_domainToAppID;
    NSMutableArray *_blocksAwaitingSharedWebCredentialsInformation;
    _Bool _initializedHistory;
    id <_SFPasswordIconControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFPasswordIconControllerDelegate> delegate;

+ (struct CGSize)preferredIconSize;

- (id)initWithMetadataManager:(id)arg1;
- (void)clearIconFetchingState;
- (id)iconForDomain:(id)arg1;
- (id)backgroundColorForDomain:(id)arg1;
- (void)_fetchTouchIconForDomain:(id)arg1;
- (void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(_Bool)arg2;
- (void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_populateDomainToItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAppIconForDomain:(id)arg1;
- (void)_iconDidUpdateForDomain:(id)arg1;
- (void)_populateDomainToAppIDWithCompletion:(CDUnknownBlockType)arg1;

@end
