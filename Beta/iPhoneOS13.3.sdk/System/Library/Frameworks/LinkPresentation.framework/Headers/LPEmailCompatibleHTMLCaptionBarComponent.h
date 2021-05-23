/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

__attribute__((visibility("hidden")))
@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent

{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)baseRules;

- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;

@end
