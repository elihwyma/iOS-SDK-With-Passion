/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSIndexPath, NSString, WFAction, WFActionDrawerResults;

@interface WFActionDrawerState : NSObject <Swift>

{
    _Bool _focusedOnSearchBar;
    long long _activePane;
    WFActionDrawerState *_precedingState;
    NSIndexPath *_listPosition;
    NSString *_searchQuery;
    WFActionDrawerResults *_listResults;
    NSString *_categoryName;
    WFAction *_action;
    NSString *_bundleIdentifier;
}

@property (nonatomic) long long activePane;
@property (retain, nonatomic) WFActionDrawerState *precedingState;
@property (retain, nonatomic) NSIndexPath *listPosition;
@property (copy, nonatomic) NSString *searchQuery;
@property (nonatomic, getter=isFocusedOnSearchBar) _Bool focusedOnSearchBar;
@property (retain, nonatomic) WFActionDrawerResults *listResults;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) WFAction *action;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (id)concatStates:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (id)stateChain;
- (id)stateByAddingState:(id)arg1;

@end
