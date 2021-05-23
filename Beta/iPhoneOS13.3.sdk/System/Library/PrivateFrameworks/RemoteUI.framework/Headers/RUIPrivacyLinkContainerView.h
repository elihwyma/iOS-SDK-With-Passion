/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIView.h>

@class NSDictionary, NSString, OBPrivacyLinkController;

@interface RUIPrivacyLinkContainerView : UIView

{
    NSDictionary *_attributes;
    OBPrivacyLinkController *_linkController;
}

@property (readonly) OBPrivacyLinkController *linkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithAttributes:(id)arg1;
- (void)configureInPage:(id)arg1;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;

@end
