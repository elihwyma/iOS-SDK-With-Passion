/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NTPBSectionSlotCostInfo;

@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCTodayPrivateData;

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject

{
    _Bool _allowLeadingCell;
    _Bool _allowSectionTitles;
    _Bool _respectMinMaxLimit;
    id <FCCoreConfigurationManager> _configurationManager;
    id <FCFeedPersonalizing> _feedPersonalizer;
    NTPBSectionSlotCostInfo *_nonVideoSectionSlotCostInfo;
    NTPBSectionSlotCostInfo *_videoSectionSlotCostInfo;
    unsigned long long _embedsLimit;
    double _slotsLimit;
    NSDate *_filterDate;
    NSObject<FCTodayPrivateData> *_todayData;
}

@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (copy, nonatomic) NTPBSectionSlotCostInfo *nonVideoSectionSlotCostInfo;
@property (copy, nonatomic) NTPBSectionSlotCostInfo *videoSectionSlotCostInfo;
@property (nonatomic) unsigned long long embedsLimit;
@property (nonatomic) _Bool allowLeadingCell;
@property (nonatomic) _Bool allowSectionTitles;
@property (nonatomic) _Bool respectMinMaxLimit;
@property (nonatomic) double slotsLimit;
@property (copy, nonatomic) NSDate *filterDate;
@property (copy, nonatomic) NSObject<FCTodayPrivateData> *todayData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConfigurationManager:(id)arg1 feedPersonalizer:(id)arg2 nonVideoSectionSlotCostInfo:(id)arg3 videoSectionSlotCostInfo:(id)arg4 embedsLimit:(unsigned long long)arg5 allowLeadingCell:(_Bool)arg6 allowSectionTitles:(_Bool)arg7 respectMinMaxLimit:(_Bool)arg8 filterDate:(id)arg9 todayData:(id)arg10 slotsLimit:(double)arg11;
- (id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2;
- (id)_itemsForSection:(id)arg1 items:(id)arg2 previouslyChosenItems:(id)arg3 allowLeadingCell:(_Bool)arg4 leadingCellItemID:(id *)arg5 priorClusterIDsInOtherSections:(id)arg6 sectionItemsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 embedsLimit:(unsigned long long)arg9 remainingSlots:(double)arg10 slotsUsed:(double *)arg11 noMoreItemsToGive:(_Bool *)arg12 noRoomForMoreItems:(_Bool *)arg13 slotAllocationByDynamicSlotItemID:(id)arg14;
- (id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4 embedsLimit:(unsigned long long)arg5;

@end
