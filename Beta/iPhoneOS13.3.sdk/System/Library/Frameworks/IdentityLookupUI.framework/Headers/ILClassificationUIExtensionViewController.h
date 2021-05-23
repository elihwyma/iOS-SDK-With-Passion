/*
 Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

#import <UIKit/UIViewController.h>

@class ILClassificationUIExtensionContext;

@interface ILClassificationUIExtensionViewController : UIViewController

@property (nonatomic, readonly) ILClassificationUIExtensionContext *extensionContext;

- (void)prepareForClassificationRequest:(id)arg1;
- (id)classificationResponseForRequest:(id)arg1;

@end
