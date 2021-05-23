/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSString, PUSearchZeroKeywordGadgetProvider;

__attribute__((visibility("hidden")))
@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager

{
    PUSearchZeroKeywordGadgetProvider *_zeroKeywordGadgetProvider;
    long long _filteringState;
}

@property (retain, nonatomic) PUSearchZeroKeywordGadgetProvider *zeroKeywordGadgetProvider;
@property (nonatomic) long long filteringState;
@property (nonatomic, readonly) _Bool isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)gadgetProviders;
- (CDUnknownBlockType)gadgetSortComparator;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (void)_waitForFirstDisplayTimedOut;
- (void)refreshData;
- (id)_sortingRankForGadget:(id)arg1;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;

@end
