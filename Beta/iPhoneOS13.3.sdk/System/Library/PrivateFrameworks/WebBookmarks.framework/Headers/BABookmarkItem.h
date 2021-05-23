/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WebBookmark, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface BABookmarkItem : NSObject

{
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
}

@property (nonatomic, readonly) WebBookmarkCollection *collection;
@property (retain, nonatomic) WebBookmark *bookmark;

- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;

@end
