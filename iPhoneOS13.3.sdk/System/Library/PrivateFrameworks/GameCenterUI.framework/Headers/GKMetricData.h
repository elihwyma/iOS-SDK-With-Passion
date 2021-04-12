//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKGridLayoutMetrics, GKSectionMetrics, NSMutableArray, NSString;

@interface GKMetricData : NSObject
{
    GKGridLayoutMetrics *_metrics;
    NSUInteger _currentMaxVisibleItemCount;
    NSUInteger _filteredTotalItemCount;
    NSMutableArray *_headerPinnableAttributes;
    NSMutableArray *_footerPinnableAttributes;
}

@property(retain, nonatomic) NSMutableArray *footerPinnableAttributes; // @synthesize footerPinnableAttributes=_footerPinnableAttributes;
@property(retain, nonatomic) NSMutableArray *headerPinnableAttributes; // @synthesize headerPinnableAttributes=_headerPinnableAttributes;
@property(nonatomic) NSUInteger filteredTotalItemCount; // @synthesize filteredTotalItemCount=_filteredTotalItemCount;
@property(nonatomic) NSUInteger currentMaxVisibleItemCount; // @synthesize currentMaxVisibleItemCount=_currentMaxVisibleItemCount;
@property(retain, nonatomic) GKGridLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (void)addAttributes:(id)arg1 forLocation:(NSUInteger)arg2;
@property(readonly, nonatomic) NSString *layoutKey;
@property(readonly, nonatomic) GKSectionMetrics *sectionMetrics;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)description;
- (id)localDescription;
- (void)dealloc;
- (id)init;

@end

