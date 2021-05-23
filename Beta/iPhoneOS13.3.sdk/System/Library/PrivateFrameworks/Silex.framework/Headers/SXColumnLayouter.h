/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SXLayouterFactory;

@protocol SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXColumnLayouter : NSObject

{
    id <SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    NSMutableDictionary *_intersectionCache;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) SXLayouterFactory *layouterFactory;
@property (nonatomic, readonly) NSMutableDictionary *intersectionCache;
@property (nonatomic, readonly) id <SXLayoutContextFactory> layoutContextFactory;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXLayouterDelegate> delegate;

- (id)columnStackForLayoutBlueprint:(id)arg1 columnLayout:(id)arg2;
- (void)createDependenciesForLayoutBlueprint:(id)arg1 columnStack:(id)arg2 inDependencyResolver:(id)arg3;
- (struct CGPoint)calculatePositionForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3;
- (struct CGSize)calculateSizeForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 dependencyResolver:(id)arg4;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(_Bool *)arg4;
- (void)analyzeSnapLinesForLayoutBlueprint:(id)arg1;
- (_Bool)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (_Bool)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2;
- (id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2;
- (int)layoutAttributeForAnchor:(long long)arg1;
- (_Bool)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (double)factorForLayoutAttribute:(int)arg1;
- (id)sortComponentDependencies:(id)arg1 forBlueprint:(id)arg2;
- (_Bool)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4;
- (id)initWithLayouterFactory:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;

@end
