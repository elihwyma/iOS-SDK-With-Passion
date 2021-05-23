/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSDictionary;

@interface SUScriptFacebookLikeStatus : SUScriptObject

{
    NSDictionary *_dictionary;
}

@property (readonly) unsigned long long friendLikeCount;
@property (readonly) NSArray *friends;
@property (readonly) unsigned long long globalLikeCount;
@property (readonly, getter=isLikedByMe) id likedByMe;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithLikeStatusDictionary:(id)arg1;

@end
