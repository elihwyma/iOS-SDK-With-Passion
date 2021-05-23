/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPVerticalTextStackViewStyle;

__attribute__((visibility("hidden")))
@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent

{
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)baseRules;

- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;
- (id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3;

@end
