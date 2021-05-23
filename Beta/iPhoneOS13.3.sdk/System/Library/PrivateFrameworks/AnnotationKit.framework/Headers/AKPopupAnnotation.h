/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotation.h>

@class NSString;

@interface AKPopupAnnotation : AKAnnotation

{
    unsigned long long _visualStyle;
    AKAnnotation *_parentAnnotation;
    NSString *_contents;
    struct CGRect _rectangle;
    struct CGRect _openRectangle;
}

@property unsigned long long visualStyle;
@property struct CGRect rectangle;
@property struct CGRect openRectangle;
@property (weak) AKAnnotation *parentAnnotation;
@property (copy) NSString *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (struct CGRect)hitTestBounds;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)translateBy:(struct CGPoint)arg1;
- (id)keysForValuesToObserveForAdornments;

@end
