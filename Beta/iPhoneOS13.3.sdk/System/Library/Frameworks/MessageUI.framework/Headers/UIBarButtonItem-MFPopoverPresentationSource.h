/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIBarButtonItem.h>

@class NSString;

@interface UIBarButtonItem (MFPopoverPresentationSource)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)mf_setAsSourceForPopoverPresentationController:(id)arg1;
- (void)mf_setImageOffset:(struct CGPoint)arg1;
- (void)mf_setLandscapeImagePhoneOffset:(struct CGPoint)arg1;
- (void)mf_setImageVerticalOffset:(double)arg1;
- (void)mf_setLandscapeImagePhoneVerticalOffset:(double)arg1;

@end
