/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@protocol _UILayoutItem <Swift>

@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;

- (unsigned short)nsli_minYVariable;
- (unsigned short)nsli_boundsHeightVariable;
- (unsigned short)nsli_minXVariable;
- (unsigned short)_referenceView;
- (unsigned short)nsli_boundsWidthVariable;
- (unsigned short)nsli_defaultResolvedValue:forSymbolicConstant:inConstraint:error: /* Error: Ran out of types for this method. */;
- (unsigned short)_uili_isFocusGuide;
- (unsigned short)_boundsWidthVariable;
- (unsigned short)_boundsHeightVariable;
- (unsigned short)_minXVariable;
- (unsigned short)_minYVariable;
- (unsigned short)_faultInGuidesForConstraint: /* Error: Ran out of types for this method. */;
- (unsigned short)_uili_existingBaseFrameVariables;
- (unsigned short)_uili_observableLayoutEngineForBaseFrameVariables: /* Error: Ran out of types for this method. */;
- (unsigned short)_uili_existingObservationEligibleLayoutVariables;
- (unsigned short)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange: /* Error: Ran out of types for this method. */;
- (unsigned short)_uili_stashLayoutVariableObservation:forVariable: /* Error: Ran out of types for this method. */;
- (unsigned short)_uili_requiresObservationForVariable: /* Error: Ran out of types for this method. */;
- (unsigned short)nsli_widthVariable;
- (unsigned short)nsli_heightVariable;

@end
