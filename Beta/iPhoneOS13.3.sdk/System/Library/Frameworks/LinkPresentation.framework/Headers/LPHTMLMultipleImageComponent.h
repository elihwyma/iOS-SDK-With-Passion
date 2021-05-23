/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class LPImageViewStyle, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLMultipleImageComponent : LPHTMLComponent

{
    LPImageViewStyle *_style;
    NSString *_themePath;
    NSArray *_images;
}

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)additionalGlobalOutOfLineStyleDeclarations;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)arg1;

- (void)buildComponents;
- (id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(_Bool)arg5;
- (void)_computeRowAndColumnSpecificationsForImages:(id)arg1;

@end
