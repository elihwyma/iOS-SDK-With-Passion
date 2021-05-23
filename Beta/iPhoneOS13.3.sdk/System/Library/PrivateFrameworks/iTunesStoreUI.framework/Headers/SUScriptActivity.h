/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUActivity, SUScriptFunction, WebScriptObject;

@interface SUScriptActivity : SUScriptObject

{
    SUScriptFunction *_actionFunction;
}

@property (nonatomic, readonly) SUActivity *nativeActivity;
@property (retain) WebScriptObject *actionFunction;
@property (copy) NSString *activityTitle;
@property (copy) NSString *activityType;
@property (readonly) NSString *activityImageNameGiftAppStore;
@property (readonly) NSString *activityImageNameGiftMusicStore;
@property (readonly) NSString *activityImageNamePingAppStore;
@property (readonly) NSString *activityImageNamePingMusicStore;
@property (readonly) NSString *activityImageNameWishlistAppStore;
@property (readonly) NSString *activityImageNameWishlistMusicStore;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_nativeActivity;
- (void)setActivityImageWithName:(id)arg1;
- (void)setActivityImageWithURL:(id)arg1 scale:(id)arg2;
- (void)_performActionFunctionWithItems:(id)arg1;

@end
