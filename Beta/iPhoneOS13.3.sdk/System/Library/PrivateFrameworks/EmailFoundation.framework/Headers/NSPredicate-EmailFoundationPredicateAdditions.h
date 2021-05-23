/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (EmailFoundationPredicateAdditions)

@property (nonatomic, readonly) _Bool ef_matchesEverything;
@property (nonatomic, readonly) _Bool ef_matchesNothing;

+ (id)ef_matchEverythingPredicate;
+ (id)ef_matchNothingPredicate;

- (id)predicateNodeFromPropertyMapper:(id)arg1;

@end
