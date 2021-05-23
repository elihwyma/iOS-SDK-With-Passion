/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSString, SUNavigationContainerViewController, SUScriptNavigationItem;

@interface SUScriptNavigationTransition : SUScriptObject

{
    long long _status;
    NSString *_title;
    SUNavigationContainerViewController *_container;
    long long _fromIndex;
    long long _toIndex;
    NSString *_rightBarButton;
    NSMutableArray *_finishBlocks;
}

@property (retain, nonatomic) NSMutableArray *finishBlocks;
@property (nonatomic) long long fromIndex;
@property (retain, nonatomic) NSString *rightBarButton;
@property (nonatomic) long long status;
@property (nonatomic) long long toIndex;
@property (retain, nonatomic) SUScriptNavigationItem *topNavigationItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (id)scriptAttributeKeys;
- (void)finishedLoading;
- (id)initWithContainer:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end
