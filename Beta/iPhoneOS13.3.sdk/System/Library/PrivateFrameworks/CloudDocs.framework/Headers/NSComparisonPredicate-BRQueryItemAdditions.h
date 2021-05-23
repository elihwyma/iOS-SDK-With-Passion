/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (BRQueryItemAdditions)

- (id)br_watchedURL;
- (id)br_urlWithWatchedChildren;
- (id)br_fileObjectIDWithWatchedChildren;
- (id)br_watchedFileObjectID;

@end
