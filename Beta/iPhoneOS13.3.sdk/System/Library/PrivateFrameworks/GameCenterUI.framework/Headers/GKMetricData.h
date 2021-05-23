/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKGridLayoutMetrics, GKSectionMetrics, NSMutableArray, NSString;

@interface GKMetricData : NSObject

{
    GKGridLayoutMetrics *_metrics;
    unsigned long long _currentMaxVisibleItemCount;
    unsigned long long _filteredTotalItemCount;
    NSMutableArray *_headerPinnableAttributes;
    NSMutableArray *_footerPinnableAttributes;
}

@property (nonatomic, readonly) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKGridLayoutMetrics *metrics;
@property (nonatomic, readonly) NSString *layoutKey;
@property (nonatomic) unsigned long long currentMaxVisibleItemCount;
@property (nonatomic) unsigned long long filteredTotalItemCount;
@property (retain, nonatomic) NSMutableArray *headerPinnableAttributes;
@property (retain, nonatomic) NSMutableArray *footerPinnableAttributes;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)localDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addAttributes:(id)arg1 forLocation:(unsigned long long)arg2;

@end
