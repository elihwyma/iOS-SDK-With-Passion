/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSSet, NSString;

@interface CLSInvestigationFeeder : NSObject

{
    unsigned long long _locationClusteringAlgorithm;
    _Bool _allowsInterview;
    NSMutableSet *_focusItems;
    NSSet *_focusPeopleUUIDs;
}

@property (nonatomic, readonly) NSMutableSet *focusItems;
@property (retain, nonatomic) NSSet *focusPeopleUUIDs;
@property (nonatomic) unsigned long long locationClusteringAlgorithm;
@property (nonatomic) _Bool allowsInterview;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)numberOfItems;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)approximateLocation;
- (double)behavioralScore;
- (id)allItems;
- (unsigned long long)numberOfItemsInInvestigation:(id)arg1;
- (struct CGImage *)itemThumbnailInInvestigation:(id)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (unsigned long long)numberOfShinyGemItems;
- (unsigned long long)numberOfRegularGemItems;
- (void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(CDUnknownBlockType)arg2;
- (id)_prepareFeederWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)prepareWithProgressBlock:(CDUnknownBlockType)arg1;

@end
