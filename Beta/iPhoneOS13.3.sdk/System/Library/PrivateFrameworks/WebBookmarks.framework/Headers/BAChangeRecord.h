/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject

{
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
    int _changeType;
}

@property (nonatomic, readonly) WebBookmarkCollection *collection;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) int changeType;

- (id)description;
- (id)_changedAttributeDescription;
- (id)_changeTypeDescription;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;

@end
