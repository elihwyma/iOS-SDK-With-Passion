/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayerInternalSegment : NSObject

{
    unsigned long long _pipeSegmentType;
    unsigned long long _cumulativeHeadlinesUsedCount;
    NSObject<NFLPipeSegment> *_pipeSegment;
    id <NFLPipelayerDelegate> _delegate;
}

@property (nonatomic) unsigned long long pipeSegmentType;
@property (nonatomic) unsigned long long cumulativeHeadlinesUsedCount;
@property (retain, nonatomic) NSObject<NFLPipeSegment> *pipeSegment;
@property (weak, nonatomic) id <NFLPipelayerDelegate> delegate;

- (id)description;

@end
