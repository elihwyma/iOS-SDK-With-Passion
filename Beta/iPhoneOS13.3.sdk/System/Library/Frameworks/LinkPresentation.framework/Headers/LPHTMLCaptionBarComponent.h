/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

__attribute__((visibility("hidden")))
@interface LPHTMLCaptionBarComponent : LPHTMLComponent

{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    _Bool _useProgressSpinner;
}

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)arg1;

- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 useProgressSpinner:(_Bool)arg3 themePath:(id)arg4 generator:(id)arg5;

@end
