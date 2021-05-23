/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSCompoundPredicate.h>

@interface NSCompoundPredicate (BRQueryItemAdditions)

- (id)br_watchedURL;
- (id)br_urlWithWatchedChildren;
- (id)_br_watchedURLWithORPredicate1:(id)arg1 predicate2:(id)arg2;
- (id)_br_watchedParentURLWithORPredicate1:(id)arg1 predicate2:(id)arg2;

@end
