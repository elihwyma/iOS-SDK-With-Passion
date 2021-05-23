/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSMutableArray, NSString, UINavigationController, WebScriptObject;

@interface SUScriptNavigationSimulator : SUScriptObject <Swift>

{
    WebScriptObject *_transitionCallback;
    long long _initialIndex;
    long long _lastVisibleIndex;
    UINavigationController *_navigationController;
    NSMutableArray *_enqueuedTransitions;
}

@property (nonatomic) long long initialIndex;
@property (nonatomic) long long lastVisibleIndex;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions;
@property (retain, nonatomic) WebScriptObject *transitionCallback;
@property (nonatomic, readonly) long long visibleIndex;
@property (nonatomic, readonly) long long indexCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)transitioning;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)startTransition;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)stopTransition;

- (id)_className;
- (void)setVisibleIndex:(long long)arg1;
- (id)attributeKeys;
- (id)initWithNavigationController:(id)arg1;
- (id)scriptAttributeKeys;
- (CDUnknownBlockType)_popHandler;
- (long long)_relativeIndexFromIndex:(long long)arg1;
- (void)popToViewAtIndex:(long long)arg1 completion:(id)arg2;
- (void)_enqueueLoadingState:(id)arg1;
- (void)_startNextTransition;
- (void)_handlePopFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_callCallbackWithWithTransition:(id)arg1;
- (void)popViewWithCompletion:(id)arg1;
- (void)pushViewWithCompletion:(id)arg1;
- (void)setIndexCount:(long long)arg1;

@end
