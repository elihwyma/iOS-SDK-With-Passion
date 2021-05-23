/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface HFTriggerActionsSetsUISummary : NSObject

{
    _Bool _needsIconSort;
    NSString *_uniqueServiceGroupName;
    unsigned long long _numberOfScenes;
    unsigned long long _numberOfStandaloneServices;
    unsigned long long _numberOfMediaAccessories;
    unsigned long long _totalStandaloneAndMediaAccessoriesCount;
    NSString *_firstSceneName;
    NSString *_firstServiceName;
    NSString *_mediaAccessoryName;
    NSMutableArray *_icons;
    NSMutableArray *_iconDescriptors;
    NSMutableDictionary *_iconCounter;
    NSString *_summaryDescription;
    NSArray *_summaryDescriptors;
}

@property (nonatomic) unsigned long long numberOfScenes;
@property (nonatomic) unsigned long long numberOfStandaloneServices;
@property (nonatomic) unsigned long long numberOfMediaAccessories;
@property (nonatomic) unsigned long long totalStandaloneAndMediaAccessoriesCount;
@property (retain, nonatomic) NSString *firstSceneName;
@property (retain, nonatomic) NSString *firstServiceName;
@property (retain, nonatomic) NSString *mediaAccessoryName;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *iconDescriptors;
@property (retain, nonatomic) NSMutableDictionary *iconCounter;
@property (nonatomic, readonly) NSString *summaryDescription;
@property (nonatomic, readonly) NSArray *summaryDescriptors;
@property (nonatomic, readonly) _Bool hasUniqueServiceGroup;
@property (nonatomic) _Bool needsIconSort;
@property (nonatomic, readonly) unsigned long long numberOfIcons;
@property (retain, nonatomic) NSString *uniqueServiceGroupName;

- (id)init;
- (id)summaryText;
- (id)summaryIconDescriptors;
- (id)summaryIcons;
- (id)initWithSummaryText:(id)arg1 summaryIconDescriptors:(id)arg2;
- (void)addSceneNamed:(id)arg1;
- (void)addIconDescriptor:(id)arg1;
- (void)addServiceNamed:(id)arg1;
- (void)addMediaAccessoryNamed:(id)arg1;
- (id)summaryText:(_Bool)arg1;
- (id)_descriptionForZeroAccessories;
- (id)_descriptionForZeroScenes;
- (void)_sortIconDescriptors;
- (void)_incrementIconCounter:(id)arg1;
- (id)initWithSummaryText:(id)arg1 summaryIconNames:(id)arg2;

@end
