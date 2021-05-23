/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class DOMElement, LPLinkHTMLGenerator, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLComponent : NSObject

{
    NSMutableArray *_children;
    LPLinkHTMLGenerator *_generator;
    DOMElement *_element;
    NSString *_themePath;
}

@property (weak, nonatomic, readonly) LPLinkHTMLGenerator *generator;
@property (nonatomic, readonly) DOMElement *element;
@property (nonatomic, readonly) NSString *themePath;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)additionalGlobalOutOfLineStyleDeclarations;

- (void)addChild:(id)arg1;
- (id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3;
- (id)childThemePathWithName:(id)arg1;

@end
