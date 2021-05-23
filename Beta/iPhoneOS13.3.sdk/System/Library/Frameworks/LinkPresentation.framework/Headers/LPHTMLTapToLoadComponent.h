/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class DOMElement, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLTapToLoadComponent : LPHTMLComponent

{
    DOMElement *_tapToLoadLabelElement;
    DOMElement *_tapToLoadSpinnerElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;

- (void)handleEvent:(id)arg1;
- (void)buildComponents;
- (id)initWithThemePath:(id)arg1 generator:(id)arg2;

@end
