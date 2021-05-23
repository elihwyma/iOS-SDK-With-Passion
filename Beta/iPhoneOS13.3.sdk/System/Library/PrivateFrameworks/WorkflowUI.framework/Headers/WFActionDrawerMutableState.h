/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFActionDrawerState.h>

@class NSIndexPath, NSString, WFAction, WFActionDrawerResults;

@interface WFActionDrawerMutableState : WFActionDrawerState

@property (nonatomic) long long activePane;
@property (retain, nonatomic) WFActionDrawerState *precedingState;
@property (retain, nonatomic) NSIndexPath *listPosition;
@property (copy, nonatomic) NSString *searchQuery;
@property (nonatomic, getter=isFocusedOnSearchBar) _Bool focusedOnSearchBar;
@property (retain, nonatomic) WFActionDrawerResults *listResults;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) WFAction *action;
@property (copy, nonatomic) NSString *bundleIdentifier;

@end
