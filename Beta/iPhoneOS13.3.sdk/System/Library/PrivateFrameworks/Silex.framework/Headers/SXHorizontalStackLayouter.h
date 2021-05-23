/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;

@protocol SXColumnCalculator, SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXHorizontalStackLayouter : NSObject

{
    id <SXLayouterDelegate> delegate;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    SXLayouterFactory *_layouterFactory;
    id <SXColumnCalculator> _columnCalculator;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) SXContainerComponentBlueprint *containerComponentBlueprint;
@property (nonatomic, readonly) SXLayouterFactory *layouterFactory;
@property (nonatomic, readonly) id <SXColumnCalculator> columnCalculator;
@property (nonatomic, readonly) id <SXLayoutContextFactory> layoutContextFactory;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXLayouterDelegate> delegate;

- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(_Bool *)arg4;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5;
- (struct CGPoint)calculatePositionForComponentWithBlueprint:(id)arg1 layout:(id)arg2 unitConverter:(id)arg3 margin:(id)arg4 maximumY:(double)arg5 layoutBlueprint:(id)arg6;
- (id)childColumnLayoutForContainerComponentWidth:(double)arg1 componentWidth:(double)arg2 componentBlueprint:(id)arg3 columnLayout:(id)arg4 unitConverter:(id)arg5;
- (struct CGSize)calculateSizeForContainerComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3 layoutDescription:(id)arg4 shouldContinue:(_Bool *)arg5;
- (struct CGSize)calculateSizeForComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3;
- (double)factorForAnchorAlingment:(long long)arg1;

@end
