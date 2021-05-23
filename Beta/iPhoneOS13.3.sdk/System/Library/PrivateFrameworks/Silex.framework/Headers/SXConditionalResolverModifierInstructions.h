/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;

@interface SXConditionalResolverModifierInstructions : NSObject

{
    id <SXDocumentProviding> _documentProvider;
    id <SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;
}

@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (nonatomic, readonly) id <SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldResolveAutoplacement;
@property (nonatomic, readonly) _Bool shouldResolveComponents;
@property (nonatomic, readonly) _Bool shouldResolveComponentLayouts;
@property (nonatomic, readonly) _Bool shouldResolveComponentStyles;
@property (nonatomic, readonly) _Bool shouldResolveComponentTextStyles;
@property (nonatomic, readonly) _Bool shouldResolveDocumentStyle;
@property (nonatomic, readonly) _Bool shouldResolveTextStyles;

- (id)hints;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;

@end
