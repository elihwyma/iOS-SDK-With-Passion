/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ContentKit/WFAlert.h>

@class NSArray, UIView, WFAlertPresentationSource;

@interface WFAlert (UIKitAdditions)

@property (retain, nonatomic) WFAlertPresentationSource *presentationSource;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets contentViewPadding;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)addKeyCommand:(id)arg1;

@end
