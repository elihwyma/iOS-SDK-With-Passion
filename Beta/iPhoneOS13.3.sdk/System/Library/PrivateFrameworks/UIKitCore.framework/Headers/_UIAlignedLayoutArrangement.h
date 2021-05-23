/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILayoutArrangement.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIAlignedLayoutArrangement : _UILayoutArrangement

{
    NSMutableDictionary *_alignmentConstraints;
    unsigned long long _alignment;
}

@property (nonatomic) unsigned long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long axis;
@property (nonatomic) _Bool layoutFillsCanvas;
@property (nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;

+ (Class)_configurationHistoryClass;

- (id)initWithItems:(id)arg1;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (id)_alignmentPropertySource;
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (_Bool)_spanningGuideConstraintsNeedUpdate;
- (id)_alignmentConfigurationHistory;
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;
- (_Bool)_hasStaleConfiguration;
- (void)_updateConfigurationHistory;
- (_Bool)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;
- (_Bool)_wantsAmbiguitySuppressionConstraints;
- (_Bool)_wantsConstraintsForAttribute:(long long)arg1;
- (long long)_attributeForConstraintGroupName:(id)arg1;
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;
- (void)_updateArrangementConstraints;
- (void)_removeConstraintGroupsAsNecessary;
- (void)_removeIndividualConstraintsAsNecessary;
- (void)_addIndividualConstraintsIfPossible;
- (void)_addConstraintGroupsAsNecessary;
- (void)_clearAllConstraintsArrays;
- (id)_identifierForSpanningLayoutGuide;
- (long long)_axisForSpanningLayoutGuide;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (_Bool)_usesCenteringConnectionConstraint;
- (id)_baselineDependentConstraints;

@end
