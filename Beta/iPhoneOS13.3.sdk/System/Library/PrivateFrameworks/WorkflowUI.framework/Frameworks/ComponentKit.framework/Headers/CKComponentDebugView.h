/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <UIKit/UIView.h>

@interface CKComponentDebugView : UIView

{
    _Bool _selfDestructOnHiding;
}

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)debugModeDidChange;

@end
