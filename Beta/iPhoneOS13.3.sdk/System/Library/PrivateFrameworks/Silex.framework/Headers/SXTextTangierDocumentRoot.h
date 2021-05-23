/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSKDocumentRoot.h>

@class TSSStylesheet, UIViewController;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot

{
    UIViewController *_viewController;
    TSSStylesheet *_aStylesheet;
}

@property (nonatomic, readonly) TSSStylesheet *aStylesheet;
@property (weak, nonatomic) UIViewController *viewController;

- (id)init;
- (id)initWithContext:(id)arg1;
- (id)stylesheet;

@end
