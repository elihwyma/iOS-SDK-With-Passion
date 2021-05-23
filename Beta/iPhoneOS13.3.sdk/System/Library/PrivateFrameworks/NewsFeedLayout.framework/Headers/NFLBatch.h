/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLBatchContext, NSMutableArray;

@interface NFLBatch : NSObject

{
    double _batchHeight;
    NFLBatchContext *_batchContext;
    NSMutableArray *_layoutInfos;
}

@property (nonatomic) double batchHeight;
@property (retain, nonatomic) NSMutableArray *layoutInfos;
@property (copy, nonatomic) NFLBatchContext *batchContext;

- (id)init;
- (void)addLayoutInfos:(id)arg1;
- (void)addLayoutInfo:(id)arg1;

@end
