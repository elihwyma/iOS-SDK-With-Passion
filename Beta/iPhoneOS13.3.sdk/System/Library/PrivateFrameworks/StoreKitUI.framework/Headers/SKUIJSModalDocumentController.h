/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, SKUIModalDocumentController;

__attribute__((visibility("hidden")))
@interface SKUIJSModalDocumentController : IKJSObject

{
    SKUIModalDocumentController *_modalDocumentController;
}

@property (weak, readonly) SKUIModalDocumentController *modalDocumentController;
@property (retain, nonatomic, readonly) NSArray *documents;

- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)pushDocument:(id)arg1:(id)arg2;
- (void)replaceDocument:(id)arg1:(id)arg2:(id)arg3;
- (id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2;
- (id)_adjustedOptionsWithOptions:(id)arg1;

@end
