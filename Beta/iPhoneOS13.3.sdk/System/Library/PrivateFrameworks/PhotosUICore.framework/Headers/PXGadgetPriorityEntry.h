/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol PXForYouRankable;

@interface PXGadgetPriorityEntry : NSObject

{
    id <PXForYouRankable> _rankable;
    NSDate *_cachedPriorityDate;
    long long _currentRank;
}

@property (retain, nonatomic) id <PXForYouRankable> rankable;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (nonatomic) long long currentRank;

@end
