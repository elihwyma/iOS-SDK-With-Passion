/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

@interface NTPersonalizedSectionLimitTransformation : NSObject

{
    NSOrderedSet *_mandatoryArticleIDs;
    NSOrderedSet *_personalizedArticleIDs;
    unsigned long long _limit;
}

@property (copy, nonatomic) NSOrderedSet *mandatoryArticleIDs;
@property (copy, nonatomic) NSOrderedSet *personalizedArticleIDs;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 limit:(unsigned long long)arg3;

@end
