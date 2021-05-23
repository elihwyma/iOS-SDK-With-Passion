/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSOrderedSet, SXComponentDependencyResolver, SXLayoutOptions;

@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;

@interface SXLayoutBlueprint : NSObject <Swift>

{
    _Bool _isComplete;
    _Bool _updating;
    SXLayoutBlueprint *_parentLayoutBlueprint;
    SXLayoutOptions *_layoutOptions;
    id <SXComponentBlueprintFactory> _componentBlueprintFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
    NSMutableDictionary *_blueprint;
    NSMutableDictionary *_flattenedBlueprint;
    NSMutableArray *_orderedComponentIdentifiers;
    NSMutableSet *_invalidatedComponents;
    SXComponentDependencyResolver *_dependencySolver;
    NSOrderedSet *_snapLines;
    struct CGSize _blueprintSize;
}

@property (nonatomic, readonly) id <SXComponentBlueprintFactory> componentBlueprintFactory;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (retain, nonatomic) NSMutableDictionary *blueprint;
@property (retain, nonatomic) NSMutableDictionary *flattenedBlueprint;
@property (retain, nonatomic) NSMutableArray *orderedComponentIdentifiers;
@property (nonatomic, getter=isUpdating) _Bool updating;
@property (retain, nonatomic) NSMutableSet *invalidatedComponents;
@property (retain, nonatomic) SXComponentDependencyResolver *dependencySolver;
@property (weak, nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic) struct CGSize blueprintSize;
@property (retain, nonatomic) NSOrderedSet *snapLines;
@property (nonatomic, readonly) SXLayoutBlueprint *rootLayoutBlueprint;
@property (nonatomic, readonly) _Bool isComplete;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)endUpdates;
- (id)componentIdentifiers;
- (id)componentsInRect:(struct CGRect)arg1;
- (id)snapLinesIncludingChildren:(_Bool)arg1;
- (id)componentBlueprintForComponentIdentifier:(id)arg1 includeChildren:(_Bool)arg2;
- (void)startUpdatesForWidth:(double)arg1;
- (id)componentBlueprintForComponentIdentifier:(id)arg1;
- (void)updatePosition:(struct CGPoint)arg1 forComponentWithIdentifier:(id)arg2;
- (void)updateSize:(struct CGSize)arg1 forComponentWithIdentifier:(id)arg2;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1;
- (void)unregisterLayout:(id)arg1;
- (void)invalidatePositionForComponentWithIdentifier:(id)arg1;
- (void)invalidateDependentsOfInvalidatedComponents;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1 suggestedSize:(struct CGSize)arg2;
- (id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg1;
- (void)invalidateDependentsOfComponentNode:(id)arg1 forDependencyResolver:(id)arg2;
- (void)invalidateBlueprint;
- (void)storeComponentsFromBlueprint:(id)arg1 inDictionary:(id)arg2;
- (id)layoutDescriptionForBlueprint:(id)arg1 depth:(unsigned long long)arg2;
- (id)initWithLayoutOptions:(id)arg1 componentBlueprintFactory:(id)arg2 unitConverterFactory:(id)arg3;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3;
- (void)invalidateBlueprintPosition;

@end
