/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol FCTagRanking;

@interface FCTagSubscriptionSorter : NSObject

{
    id <FCTagRanking> _tagRanker;
}

@property (nonatomic, readonly) id <FCTagRanking> tagRanker;

- (id)initWithTagRanker:(id)arg1;
- (id)sortTagSubscriptions:(id)arg1;

@end
