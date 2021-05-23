/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLLinkComponent : LPHTMLComponent

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)arg1;

- (void)handleEvent:(id)arg1;
- (id)initWithURL:(id)arg1 generator:(id)arg2;

@end
