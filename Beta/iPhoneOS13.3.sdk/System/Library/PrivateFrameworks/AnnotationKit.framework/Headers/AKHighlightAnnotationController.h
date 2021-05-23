/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject

{
    AKController *_controller;
    AKHighlightAnnotation *_continuousHighlight;
}

@property (weak) AKController *controller;
@property (retain) AKHighlightAnnotation *continuousHighlight;

- (id)initWithController:(id)arg1;
- (void)continueHighlighting;
- (void)beginContinuousHighlighting;
- (void)endContinuousHighlighting;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)arg1;
- (_Bool)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id *)arg3;
- (_Bool)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(struct _NSRange)arg3 onPageController:(id)arg4;
- (id)_highlightsInCharacterIndexRange:(struct _NSRange)arg1 onPageController:(id)arg2;
- (void)performOneShotHighlightWithAttributeTag:(long long)arg1;
- (void)clearHighlightsWithinSelection;
- (id)highlightsWithinSelection;

@end
