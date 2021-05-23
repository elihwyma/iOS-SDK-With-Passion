/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCDocumentItem.h>

__attribute__((visibility("hidden")))
@interface BRCFinderBookmarkItem : BRCDocumentItem

- (_Bool)isFinderBookmark;
- (id)asFinderBookmark;
- (_Bool)isShareableItem;
- (id)asShareableItem;
- (id)contentsRecordID;
- (id)baseContentsRecord;

@end
