/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUSegmentedControl, SUStorePageViewController;

@interface SUScriptSegmentedControl : SUScriptObject

{
    NSArray *_segments;
    long long _style;
}

@property (nonatomic, readonly) SUSegmentedControl *activeSegmentedControl;
@property (nonatomic, readonly) NSArray *rawSegments;
@property (nonatomic, readonly) SUStorePageViewController *storePageViewController;
@property (retain, nonatomic) SUSegmentedControl *nativeSegmentedControl;
@property (nonatomic, readonly) long long nativeSelectedIndex;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *moreListTitle;
@property long long maximumNumberOfItems;
@property double maximumWidth;
@property (retain) id segments;
@property (retain) NSNumber *selectedIndex;
@property (readonly) NSNumber *selectedSegmentIndex;
@property (copy) id showsMoreListAutomatically;
@property (retain) NSString *style;
@property (copy) id tintColor;
@property long long tintStyle;
@property (readonly) unsigned long long controlStateDisabled;
@property (readonly) unsigned long long controlStateHighlighted;
@property (readonly) unsigned long long controlStateNormal;
@property (readonly) unsigned long long controlStateSelected;
@property (readonly) NSNumber *noSegmentIndex;
@property (readonly) long long tintStyleDark;
@property (readonly) long long tintStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)newPageSectionGroup;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3;
- (void)_setRawSegments:(id)arg1;
- (void)_reloadViewControllerPageSectionGroup;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (long long)_sectionsStyleForString:(id)arg1;
- (void)hideMoreListAnimated:(_Bool)arg1;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)showMoreListAnimated:(_Bool)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(_Bool)arg3;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (id)titleShadowColorForControlState:(unsigned long long)arg1;

@end
