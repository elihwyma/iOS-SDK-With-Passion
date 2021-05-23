/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLSubBatchLayout;

@interface NFLDealerPipeSegment : NSObject

{
    unsigned long long _pipeSegmentType;
    NFLSubBatchLayout *_subBatchLayout;
    CDUnknownBlockType _segmentTypeDescriptionProvider;
}

@property (nonatomic) unsigned long long pipeSegmentType;
@property (retain, nonatomic) NFLSubBatchLayout *subBatchLayout;
@property (copy, nonatomic) CDUnknownBlockType segmentTypeDescriptionProvider;

- (id)init;
- (id)description;
- (id)initWithSegmentType:(unsigned long long)arg1 subBatchLayout:(id)arg2 segmentTypeDescriptionProvider:(CDUnknownBlockType)arg3;

@end
