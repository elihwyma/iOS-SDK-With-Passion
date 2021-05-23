/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MTHLSVideoPlaylist : NSObject

{
    unsigned long long _startPosition;
    NSMutableArray *_rollItems;
    NSArray *_mainFeatureMetricsData;
}

@property (nonatomic) unsigned long long startPosition;
@property (retain, nonatomic) NSMutableArray *rollItems;
@property (retain, nonatomic) NSArray *mainFeatureMetricsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *eventData;

- (id)initWithStartPosition:(unsigned long long)arg1 mainFeatureMetricsData:(id)arg2;
- (void)addRollInfoItem:(id)arg1;
- (void)addRollItemWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)addRollItem:(id)arg1;
- (long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)arg1;
- (id)mainFeatureItemWithStartOverallPosition:(unsigned long long)arg1;
- (id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;
- (id)initWithMainFeatureMetricsData:(id)arg1;
- (void)addRollInfoItems:(id)arg1;

@end
