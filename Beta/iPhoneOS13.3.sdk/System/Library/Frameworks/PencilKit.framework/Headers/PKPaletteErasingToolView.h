/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKPaletteToolView.h>

@class NSString, UIViewController;

@interface PKPaletteErasingToolView : PKPaletteToolView

{
    _Bool _bitmapEraser;
    UIViewController *_attributeViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isBitmapEraser) _Bool bitmapEraser;

- (void)erasingAttributesViewControllerDidChangeErasingType:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1;
- (id)toolIdentifier;
- (id)attributeViewController;
- (void)_updateAttributesViewController;

@end
