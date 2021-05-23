/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILayoutGuide.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutSpacer : UILayoutGuide

{
    _Bool _compatibilityGuideAllowsArchivingAsSubview;
    _Bool _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
}

@property (nonatomic, getter=_isHorizontal, setter=_setHorizontal:) _Bool _horizontal;
@property (nonatomic, setter=_setCompatibilityGuideAllowsArchivingAsSubview:) _Bool _compatibilityGuideAllowsArchivingAsSubview;
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime;
@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double length;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutDimension *heightAnchor;

+ (id)_verticalLayoutSpacer;
+ (id)_horizontalLayoutSpacer;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_setUpCounterDimensionConstraint;

@end
