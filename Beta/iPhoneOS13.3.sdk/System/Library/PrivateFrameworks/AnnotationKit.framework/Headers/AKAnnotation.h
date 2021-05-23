/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface AKAnnotation : NSObject

{
    CDUnknownBlockType _appearanceOverride;
    _Bool _shouldUseAppearanceOverride;
    _Bool _isObservingForAppearance;
    struct CGPDFDocument *_appearanceOverridePDF;
    _Bool _isObservingForIsEdited;
    _Bool _isReallyObservingForIsEdited;
    long long _predConformsToAKStrokedAnnotationProtocol;
    _Bool _conformsToAKStrokedAnnotationProtocol;
    long long _predConformsToAKFilledAnnotationProtocol;
    _Bool _conformsToAKFilledAnnotationProtocol;
    long long _predConformsToAKRectangularAnnotationProtocol;
    _Bool _conformsToAKRectangularAnnotationProtocol;
    long long _predConformsToAKFlippableAnnotationProtocol;
    _Bool _conformsToAKFlippableAnnotationProtocol;
    long long _predConformsToAKRotatableAnnotationProtocol;
    _Bool _conformsToAKRotatableAnnotationProtocol;
    long long _predConformsToAKTextAnnotationProtocol;
    _Bool _conformsToAKTextAnnotationProtocol;
    long long _predConformsToAKParentAnnotationProtocol;
    _Bool _conformsToAKParentAnnotationProtocol;
    long long _predConformsToAKChildAnnotationProtocol;
    _Bool _conformsToAKChildAnnotationProtocol;
    _Bool _editsDisableAppearanceOverride;
    _Bool _isEdited;
    _Bool _isTranslating;
    _Bool _isDraggingHandle;
    _Bool _isEditingText;
    _Bool _textIsFixedWidth;
    _Bool _textIsFixedHeight;
    _Bool _textIsClipped;
    _Bool _shouldUsePlaceholderText;
    _Bool _isBeingCopied;
    NSString *_UUID;
    NSString *_customPlaceholderText;
    double _originalModelBaseScaleFactor;
    long long _originalExifOrientation;
    NSDate *_modificationDate;
    NSString *_author;
    long long _akSerializationVersion;
    long long _akSerializationPlatform;
    AKAnnotation *_parentAnnotation;
    AKAnnotation *_childAnnotation;
    struct CGRect _initialDrawingBoundsForAppearanceOverride;
}

@property _Bool isEdited;
@property long long akSerializationVersion;
@property long long akSerializationPlatform;
@property _Bool isEditingText;
@property _Bool textIsFixedWidth;
@property _Bool textIsFixedHeight;
@property _Bool textIsClipped;
@property _Bool shouldUsePlaceholderText;
@property (weak) AKAnnotation *parentAnnotation;
@property (weak) AKAnnotation *childAnnotation;
@property struct CGRect initialDrawingBoundsForAppearanceOverride;
@property _Bool shouldUseAppearanceOverride;
@property _Bool shouldObserveEdits;
@property _Bool isBeingCopied;
@property (readonly) NSString *UUID;
@property (readonly) NSString *displayName;
@property (copy) NSString *customPlaceholderText;
@property (nonatomic) double originalModelBaseScaleFactor;
@property (nonatomic) long long originalExifOrientation;
@property (readonly) struct CGRect hitTestBounds;
@property (readonly) struct CGRect drawingBounds;
@property (readonly) struct CGRect integralDrawingBounds;
@property (copy) CDUnknownBlockType appearanceOverride;
@property (readonly) _Bool isUsingAppearanceOverride;
@property _Bool editsDisableAppearanceOverride;
@property (readonly) _Bool shouldBurnIn;
@property (retain) NSDate *modificationDate;
@property (copy) NSString *author;
@property _Bool isTranslating;
@property _Bool isDraggingHandle;

+ (_Bool)supportsSecureCoding;
+ (id)annotationWithData:(id)arg1;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)defaultPlaceholderText;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)dataRepresentation;
- (id)keysForValuesToObserveForUndo;
- (_Bool)conformsToAKRotatableAnnotationProtocol;
- (id)keysForValuesToObserveForRedrawing;
- (void)adjustModelToCompensateForOriginalExif;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)translateBy:(struct CGPoint)arg1;
- (id)keysForValuesToObserveForAdornments;
- (_Bool)conformsToAKRectangularAnnotationProtocol;
- (_Bool)conformsToAKTextAnnotationProtocol;
- (_Bool)conformsToAKFilledAnnotationProtocol;
- (_Bool)conformsToAKParentAnnotationProtocol;
- (_Bool)conformsToAKStrokedAnnotationProtocol;
- (_Bool)conformsToAKFlippableAnnotationProtocol;
- (_Bool)conformsToAKChildAnnotationProtocol;

@end
