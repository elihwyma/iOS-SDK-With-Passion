/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetUIViewController.h>

@class NSString, PXForYouBadgeManager, PXForYouGadgetPriorityManager, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;

@interface PXForYouGadgetViewController : PXGadgetUIViewController

{
    _Bool _needsRefresh;
    UIBarButtonItem *_navigationDisplayModeButtonItem;
    PXForYouBadgeManager *_badgeManager;
    PXForYouGadgetPriorityManager *_priorityManager;
}

@property (retain, nonatomic) PXForYouBadgeManager *badgeManager;
@property (retain, nonatomic) PXForYouGadgetPriorityManager *priorityManager;
@property (nonatomic, readonly) NSString *currentDateText;
@property (nonatomic) _Bool needsRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *navigationTitle;
@property (nonatomic, readonly) NSString *navigationIdentifier;
@property (retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *navigationListDataSourceManager;

+ (void)setLastExitedForYouDate:(id)arg1;
+ (id)lastExitedForYouDate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)reloadContent;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)navigateToSharedAlbumActivityFeedAnimated:(_Bool)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)navigateToDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (id)navigateToShowAllMemoriesFeedAnimated:(_Bool)arg1;
- (id)initWithBadgeManager:(id)arg1;
- (void)_calendarDayChanged;
- (void)_lastSeenBadgeDateChanged;
- (void)rootGadgetControllerWillAppear;
- (void)rootGadgetControllerDidDisappear;
- (void)configureSectionHeader:(id)arg1;
- (long long)scrollAnimationIdentifier;
- (id)_suggestionDumpURL;
- (void)_userDidViewCloudFeedContent;
- (void)ppt_navigateToFirstSuggestedCMMAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)ppt_navigateToFirstInvitationCMM:(_Bool)arg1 withCompleteHandler:(CDUnknownBlockType)arg2;

@end
