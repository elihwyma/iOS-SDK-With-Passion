/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory, SXLayoutContextFactory, SXLayouterFactory, SXUnitConverterFactory;

@interface SXLayoutOperationFactory : NSObject

{
    id <SXComponentSizerEngine> _componentSizerEngine;
    id <SXLayoutBlueprintFactory> _layoutBlueprintFactory;
    id <SXLayouterFactory> _layouterFactory;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) id <SXComponentSizerEngine> componentSizerEngine;
@property (nonatomic, readonly) id <SXLayoutBlueprintFactory> layoutBlueprintFactory;
@property (nonatomic, readonly) id <SXLayouterFactory> layouterFactory;
@property (nonatomic, readonly) id <SXLayoutContextFactory> layoutContextFactory;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)layoutOperationWithTask:(id)arg1 DOMObjectProvider:(id)arg2;
- (id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2 layouterFactory:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5;

@end
