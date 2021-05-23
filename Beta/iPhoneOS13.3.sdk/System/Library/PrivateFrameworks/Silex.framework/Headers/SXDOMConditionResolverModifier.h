/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXConditionalObjectResolver;

@protocol SXConditionValidationContextFactory, SXConditionalResolverModifierInstructions;

@interface SXDOMConditionResolverModifier : NSObject

{
    _Bool _hasCheckedInstructions;
    _Bool _resolveComponents;
    _Bool _resolveComponentStyles;
    _Bool _resolveComponentLayouts;
    _Bool _resolveComponentTextStyles;
    _Bool _resolveTextStyles;
    _Bool _resolveAutoplacement;
    _Bool _resolveDocumentStyle;
    id <SXConditionValidationContextFactory> _validationContextFactory;
    SXConditionalObjectResolver *_componentResolver;
    SXConditionalObjectResolver *_textStyleResolver;
    SXConditionalObjectResolver *_componentStyleResolver;
    SXConditionalObjectResolver *_componentLayoutResolver;
    SXConditionalObjectResolver *_componentTextStyleResolver;
    SXConditionalObjectResolver *_advertisementAutoPlacementResolver;
    SXConditionalObjectResolver *_suggestedArticlesAutoPlacementResolver;
    SXConditionalObjectResolver *_documentStyleResolver;
    id <SXConditionalResolverModifierInstructions> _instructions;
}

@property (nonatomic, readonly) id <SXConditionValidationContextFactory> validationContextFactory;
@property (nonatomic, readonly) SXConditionalObjectResolver *componentResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *textStyleResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *componentStyleResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *componentLayoutResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *componentTextStyleResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *advertisementAutoPlacementResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *suggestedArticlesAutoPlacementResolver;
@property (nonatomic, readonly) SXConditionalObjectResolver *documentStyleResolver;
@property (nonatomic, readonly) id <SXConditionalResolverModifierInstructions> instructions;
@property (nonatomic, readonly) _Bool hasCheckedInstructions;
@property (nonatomic, readonly) _Bool resolveComponents;
@property (nonatomic, readonly) _Bool resolveComponentStyles;
@property (nonatomic, readonly) _Bool resolveComponentLayouts;
@property (nonatomic, readonly) _Bool resolveComponentTextStyles;
@property (nonatomic, readonly) _Bool resolveTextStyles;
@property (nonatomic, readonly) _Bool resolveAutoplacement;
@property (nonatomic, readonly) _Bool resolveDocumentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (id)initWithValidationContextFactory:(id)arg1 componentResolver:(id)arg2 textStyleResolver:(id)arg3 componentStyleResolver:(id)arg4 componentLayoutResolver:(id)arg5 componentTextStyleResolver:(id)arg6 advertisementAutoPlacementResolver:(id)arg7 suggestedArticlesAutoPlacementResolver:(id)arg8 documentStyleResolver:(id)arg9 instructions:(id)arg10;
- (_Bool)resolveComponents:(id)arg1 validationContext:(id)arg2;
- (_Bool)resolveTextStyles:(id)arg1 validationContext:(id)arg2;
- (_Bool)resolveComponentLayouts:(id)arg1 validationContext:(id)arg2;
- (_Bool)resolveComponentStyles:(id)arg1 validationContext:(id)arg2;
- (_Bool)resolveComponentTextStyle:(id)arg1 validationContext:(id)arg2;
- (id)resolveAutoPlacement:(id)arg1 validationContext:(id)arg2;
- (id)resolveDocumentStyle:(id)arg1 validationContext:(id)arg2;

@end
