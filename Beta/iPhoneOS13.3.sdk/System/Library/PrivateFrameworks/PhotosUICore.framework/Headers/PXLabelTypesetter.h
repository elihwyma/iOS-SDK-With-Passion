/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSAttributedString;

@interface PXLabelTypesetter : PXObservable

{
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _allowTruncation;
    struct CGContext *_context;
    NSAttributedString *_attributedString;
    long long _typesettingMode;
    unsigned long long _maximumNumberOfLines;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    NSArray *_lines;
    struct CGRect _bounds;
}

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) long long typesettingMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) _Bool allowTruncation;
@property (nonatomic) double minimumTruncatedScaleFactor;
@property (nonatomic, readonly) struct CGContext *context;
@property (nonatomic, readonly) NSArray *lines;

- (id)init;
- (id)initWithContext:(struct CGContext *)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(struct UIFont *)arg2;
- (void)_updateLines;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2;
- (_Bool)_allowTextOverlapForFont:(struct UIFont *)arg1;
- (void)_setLines:(id)arg1;

@end
