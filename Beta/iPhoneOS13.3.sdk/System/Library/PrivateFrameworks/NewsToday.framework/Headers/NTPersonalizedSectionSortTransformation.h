/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

@protocol FCFeedTransforming;

@interface NTPersonalizedSectionSortTransformation : NSObject

{
    NSOrderedSet *_mandatoryArticleIDs;
    NSOrderedSet *_personalizedArticleIDs;
    id <FCFeedTransforming> _sortTransformation;
}

@property (copy, nonatomic) NSOrderedSet *mandatoryArticleIDs;
@property (copy, nonatomic) NSOrderedSet *personalizedArticleIDs;
@property (retain, nonatomic) id <FCFeedTransforming> sortTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 sortTransformation:(id)arg3;

@end
