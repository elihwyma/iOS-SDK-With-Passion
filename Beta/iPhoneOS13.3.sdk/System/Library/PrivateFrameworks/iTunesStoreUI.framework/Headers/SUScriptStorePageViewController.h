/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSNumber, NSString, SUScriptSegmentedControl;

@interface SUScriptStorePageViewController : SUScriptViewController

{
    NSArray *_initialURLStrings;
}

@property (readonly) NSArray *URLStrings;
@property id alwaysDispatchesScrollEvents;
@property _Bool doubleTapEnabled;
@property _Bool flashesScrollIndicators;
@property id inputViewObeysDOMFocus;
@property long long loadingIndicatorStyle;
@property id loadsWhenHidden;
@property (retain) id loadingTextColor;
@property (retain) id loadingTextShadowColor;
@property (retain) id placeholderBackgroundStyle;
@property (readonly) id rootObject;
@property _Bool scrollingEnabled;
@property (retain) SUScriptSegmentedControl *segmentedControl;
@property _Bool shouldInvalidateForLowMemory;
@property _Bool shouldLoadProgressively;
@property id shouldShowFormAccessory;
@property _Bool showsBackgroundShadow;
@property id showsHorizontalScrollIndicator;
@property id showsVerticalScrollIndicator;
@property (retain) NSNumber *timeoutInterval;
@property (retain) id URLs;
@property (retain) NSString *userInfo;
@property (readonly) long long indicatorStyleWhite;
@property (readonly) long long indicatorStyleGray;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (_Bool)copyURLStrings:(id *)arg1 forValue:(id)arg2;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)_storePageViewController;
- (id)scriptAttributeKeys;
- (void)setNativeViewController:(id)arg1;
- (id)newNativeViewController;
- (id)initWithURLStrings:(id)arg1;
- (id)_copyURLsFromURLStrings:(id)arg1;
- (void)applyURLStrings:(id)arg1 toViewController:(id)arg2;
- (id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2;
- (_Bool)_isSegmentedControlValid:(id)arg1;
- (void)_setURLs:(id)arg1;
- (id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2;
- (void)reloadWithCallback:(id)arg1;
- (id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2;
- (void)setScrollEdgeInsetsWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2;

@end
