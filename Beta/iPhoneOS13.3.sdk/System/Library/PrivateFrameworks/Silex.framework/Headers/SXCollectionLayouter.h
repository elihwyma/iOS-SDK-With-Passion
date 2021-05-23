/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;

@protocol SXColumnCalculator, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXCollectionLayouter : NSObject

{
    id <SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    id <SXColumnCalculator> _columnCalculator;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) SXLayouterFactory *layouterFactory;
@property (nonatomic, readonly) SXContainerComponentBlueprint *containerComponentBlueprint;
@property (nonatomic, readonly) id <SXColumnCalculator> columnCalculator;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXLayouterDelegate> delegate;

- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(_Bool *)arg4;
- (id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 unitConverter:(id)arg6;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 unitConverterFactory:(id)arg4;

@end
