//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/WDMedicalRecordDaySummaryDelegate-Protocol.h>

@class HKConcept, HKMultiTypeSampleIterator, HRProfile, NSArray, NSDictionary, NSMutableArray, NSPredicate, NSUUID, WDMedicalRecordPagingContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDisplayItemProvider : NSObject <WDMedicalRecordDaySummaryDelegate>
{
    long long _displayItemOptions;
    NSDictionary *_additionalPredicates;
    NSPredicate *_filter;
    id /* CDUnknownBlockType */ _errorHandler;
    HRProfile *_profile;
    HKConcept *_concept;
    NSMutableArray *_medicalRecordGroups;
    NSMutableArray *_dateLessGroups;
    NSArray *_pendingMedicalRecordGroups;
    NSArray *_pendingDateLessGroups;
    NSArray *_sampleTypes;
    NSArray *_sortDescriptors;
    NSPredicate *_accountsPredicate;
    id /* CDUnknownBlockType */ _updateHandler;
    NSUUID *_targetUUID;
    NSObject<OS_dispatch_queue> *_dataQueryQueue;
    WDMedicalRecordPagingContext *_pagingContext;
    HKMultiTypeSampleIterator *_iterator;
}

+ (id)unknownRecordCategory;
+ (id)allSupportedSampleTypes;
+ (id)allSupportedRecordCategoryTypes;
+ (id)supportedRecordCategoriesByCategoryType;
+ (id)allSupportedRecordCategories;
@property(retain, nonatomic) HKMultiTypeSampleIterator *iterator; // @synthesize iterator=_iterator;
@property(retain, nonatomic) WDMedicalRecordPagingContext *pagingContext; // @synthesize pagingContext=_pagingContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueryQueue; // @synthesize dataQueryQueue=_dataQueryQueue;
@property(copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSPredicate *accountsPredicate; // @synthesize accountsPredicate=_accountsPredicate;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSArray *sampleTypes; // @synthesize sampleTypes=_sampleTypes;
@property(retain, nonatomic) NSArray *pendingDateLessGroups; // @synthesize pendingDateLessGroups=_pendingDateLessGroups;
@property(retain, nonatomic) NSArray *pendingMedicalRecordGroups; // @synthesize pendingMedicalRecordGroups=_pendingMedicalRecordGroups;
@property(retain, nonatomic) NSMutableArray *dateLessGroups; // @synthesize dateLessGroups=_dateLessGroups;
@property(retain, nonatomic) NSMutableArray *medicalRecordGroups; // @synthesize medicalRecordGroups=_medicalRecordGroups;
@property(retain, nonatomic) HKConcept *concept; // @synthesize concept=_concept;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSPredicate *filter; // @synthesize filter=_filter;
@property(readonly, copy, nonatomic) NSDictionary *additionalPredicates; // @synthesize additionalPredicates=_additionalPredicates;
@property(nonatomic) long long displayItemOptions; // @synthesize displayItemOptions=_displayItemOptions;
// - (void).cxx_destruct;
- (void)daySummaryHasDisplayItemUpdate:(id)arg1;
- (id)_sortedDisplayItemGroupWithDateDisplay:(id)arg1 sourceDaySummaryMapping:(id)arg2;
- (void)_displayItemGroupsForSummaryOfRecords:(id)arg1 style:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_processAccumulatedRecordsForPage:(id)arg1;
- (void)_queue_queryForNextBatchOfData;
- (void)_commitPendingGroupsAndCallUpdateHandlerBypassGroupChangeDetermination:(BOOL)arg1;
- (id)_displayItemGroupAtIndex:(long long)arg1;
- (id)_queue_synthesizedPredicatesForMedicalType:(id)arg1;
- (void)_queue_resetPagingInformation;
- (void)_queue_setupIterator;
- (id)subtitleForGroupAtIndex:(long long)arg1;
- (id)titleForGroupAtIndex:(long long)arg1;
- (id)indexPathForRecordId:(id)arg1;
- (id)displayItemForIndexPath:(id)arg1;
- (long long)numberOfDisplayItemsForGroupAtIndex:(long long)arg1;
- (long long)numberOfGroups;
- (void)requestDataOfNextPage;
- (void)stopCollectingData;
- (void)startCollectingDataUntilRecordWithUUID:(id)arg1 withUpdateHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setSampleTypes:(id)arg1 predicatesPerType:(id)arg2 accountsPredicate:(id)arg3;
- (void)reload;
- (id)initWithProfile:(id)arg1 displayItemOptions:(long long)arg2 sampleTypes:(id)arg3 filter:(id)arg4 additionalPredicates:(id)arg5 sortDescriptors:(id)arg6;
- (id)initWithProfile:(id)arg1 concept:(id)arg2 displayItemOptions:(long long)arg3 sampleTypes:(id)arg4 filter:(id)arg5 additionalPredicates:(id)arg6 sortDescriptors:(id)arg7;

@end

