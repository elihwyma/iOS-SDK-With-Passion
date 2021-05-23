/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (BRQueryItemAdditions)

- (id)br_watchedURL;
- (id)br_urlWithWatchedChildren;
- (id)br_fileObjectIDWithWatchedChildren;
- (id)br_watchedFileObjectID;

@end
