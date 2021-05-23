/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSDictionary, WebBookmark;

@interface WebBookmarkChange : NSObject

{
    int _bookmarkID;
    int _parentID;
    long long _changeType;
    WebBookmark *_bookmark;
    unsigned long long _modifiedAttributes;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int bookmarkID;
@property (nonatomic) int parentID;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) unsigned long long modifiedAttributes;

+ (id)bookmarkAddChangeWithBookmark:(id)arg1;
+ (id)bookmarkModifyChangeWithBookmark:(id)arg1;

- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)attributesMarkedAsModify:(unsigned long long)arg1;
- (id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 changeType:(long long)arg4;
- (void)_setModifiedAttributesIfSupported;
- (id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 changeType:(long long)arg3;
- (void)applyModificationsToBookmark:(id)arg1;

@end
