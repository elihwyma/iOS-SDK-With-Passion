/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSNumber, NSString;

@interface SUScriptSplitViewController : SUScriptViewController

@property (retain) SUScriptViewController *firstViewController;
@property (retain) id minimumPaneSize;
@property (retain) SUScriptViewController *secondViewController;
@property (retain) id splitPosition;
@property (retain) id splitShadowColor;
@property (retain) NSNumber *splitShadowOpacity;
@property (retain) NSNumber *splitShadowRadius;
@property (retain) NSString *splitType;
@property (retain) NSString *title;
@property _Bool usesSharedPlaceholder;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)_splitViewController;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;

@end
