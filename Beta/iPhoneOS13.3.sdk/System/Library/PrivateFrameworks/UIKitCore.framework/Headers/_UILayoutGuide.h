/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutGuide : UIView

{
    _Bool _allowsArchivingAsSubview;
    _Bool _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
    NSString *_archivedIdentifier;
}

@property (nonatomic, getter=isHorizontal, setter=_setHorizontal:) _Bool _horizontal;
@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;
@property (nonatomic, setter=_setAllowsArchivingAsSubview:) _Bool _allowsArchivingAsSubview;
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double length;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutDimension *heightAnchor;

+ (id)classFallbacksForKeyedArchiver;
+ (id)_verticalLayoutGuide;
+ (id)_horizontalLayoutGuide;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_layoutVariablesWithAmbiguousValue;
- (_Bool)_isFloatingLayoutItem;
- (void)_setUpCounterDimensionConstraint;

@end
