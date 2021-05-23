/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIResponder.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIView;

@protocol WFNonViewResponderDelegate;

@interface WFNonViewResponder : UIResponder <Swift>

{
    UIResponder *_nextResponder;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    id <WFNonViewResponderDelegate> _delegate;
}

@property (weak, nonatomic) id <WFNonViewResponderDelegate> delegate;
@property (weak, nonatomic) UIResponder *nextResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;

- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;

@end
