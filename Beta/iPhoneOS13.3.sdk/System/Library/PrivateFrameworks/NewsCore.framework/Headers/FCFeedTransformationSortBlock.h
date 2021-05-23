/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort

{
    CDUnknownBlockType _sortBlock;
}

@property (copy, nonatomic) CDUnknownBlockType sortBlock;

+ (id)transformationWithSortBlock:(CDUnknownBlockType)arg1;

- (id)transformFeedItems:(id)arg1;

@end
