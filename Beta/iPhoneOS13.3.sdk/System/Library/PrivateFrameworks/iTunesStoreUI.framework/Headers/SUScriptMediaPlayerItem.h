/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUMediaPlayerItem;

@interface SUScriptMediaPlayerItem : SUScriptObject

{
    SUMediaPlayerItem *_mediaItem;
}

@property (copy) NSString *backgroundImageURL;
@property (copy) NSString *bookmarkIdentifier;
@property (copy) NSString *initialOrientation;
@property (retain) NSNumber *itemIdentifier;
@property (copy) NSString *itemType;
@property (retain) NSNumber *playableDuration;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;
@property (copy) NSString *URL;

+ (id)webScriptNameForKey:(const char *)arg1;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)copyNativeMediaPlayerItem;

@end
