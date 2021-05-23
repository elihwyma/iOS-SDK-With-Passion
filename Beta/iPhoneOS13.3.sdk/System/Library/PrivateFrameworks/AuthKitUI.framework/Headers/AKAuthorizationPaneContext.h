/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class AKAuthorizationPaneViewController, NSMutableArray, UIStackView;

@interface AKAuthorizationPaneContext : NSObject

{
    AKAuthorizationPaneViewController *_paneViewController;
    UIStackView *_stackView;
    NSMutableArray *_internalMutableConstraints;
}

@property (retain, nonatomic) NSMutableArray *internalMutableConstraints;
@property (nonatomic, readonly) AKAuthorizationPaneViewController *paneViewController;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) NSMutableArray *mutableConstraints;

- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;
- (void)addSubPane:(id)arg1;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3;

@end
