/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppDocument, NSDictionary, NSString, SKUINavigationDocumentController, UIPopoverPresentationController, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIDocumentStackItem : NSObject

{
    IKAppDocument *_document;
    SKUINavigationDocumentController *_navigationDocumentController;
    NSDictionary *_presentationOptions;
    _Bool _usesNavigationControllerForModalPresentation;
    UIViewController *_viewController;
    UIPopoverPresentationController *_popoverPresentationController;
}

@property (nonatomic, readonly) IKAppDocument *document;
@property (nonatomic, readonly) NSDictionary *presentationOptions;
@property (nonatomic) _Bool usesNavigationControllerForModalPresentation;
@property (retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationController;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly) NSString *presentationType;
@property (nonatomic, readonly) NSString *sheetType;
@property (nonatomic, readonly) NSString *overlayType;
@property (nonatomic, readonly) NSString *sourceElementIdentifier;

- (id)init;
- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;
- (void)_setDocument:(id)arg1;

@end
