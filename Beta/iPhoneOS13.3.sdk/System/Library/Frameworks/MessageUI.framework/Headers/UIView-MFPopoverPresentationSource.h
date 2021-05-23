/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (MFPopoverPresentationSource)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)mf_currentScreenScale;
- (void)mf_pinToView:(id)arg1 usingLayoutMargins:(_Bool)arg2;
- (void)mf_setAsSourceForPopoverPresentationController:(id)arg1;
- (void)mf_setAsSourceWithExtendedRectForPopoverPresentationController:(id)arg1;
- (id)mf_enclosingScrollView;
- (id)mf_frontSibling;

@end
