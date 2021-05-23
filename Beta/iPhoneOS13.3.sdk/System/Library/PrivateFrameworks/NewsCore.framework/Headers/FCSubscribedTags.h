/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCSubscribedTags : NSObject

{
    NSArray *_subscribedTags;
    NSArray *_mutedTags;
    NSArray *_autoFavoriteTags;
    NSArray *_groupableTags;
}

@property (copy, nonatomic) NSArray *subscribedTags;
@property (copy, nonatomic) NSArray *mutedTags;
@property (copy, nonatomic) NSArray *autoFavoriteTags;
@property (copy, nonatomic) NSArray *groupableTags;

- (id)initWithSubscribedTags:(id)arg1 mutedTags:(id)arg2 autoFavoriteTags:(id)arg3 groupableTags:(id)arg4;

@end
