/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTextKitContext, CKTextKitShadower, UITraitCollection;

@protocol CKTextKitTruncating;

@interface CKTextKitRenderer : NSObject

{
    struct CGSize _calculatedSize;
    double _verticalOffset;
    CKTextKitContext *_context;
    id <CKTextKitTruncating> _truncater;
    CKTextKitShadower *_shadower;
    UITraitCollection *_traitCollection;
    struct CGSize _constrainedSize;
    struct CKTextKitAttributes _attributes;
}

@property (nonatomic, readonly) CKTextKitContext *context;
@property (nonatomic, readonly) id <CKTextKitTruncating> truncater;
@property (nonatomic, readonly) CKTextKitShadower *shadower;
@property (nonatomic, readonly) struct CKTextKitAttributes attributes;
@property (nonatomic, readonly) struct CGSize constrainedSize;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (struct CGSize)size;
- (id).cxx_construct;
- (unsigned long long)lineCount;
- (void)_calculateSize;
- (id)initWithTextKitAttributes:(const struct CKTextKitAttributes *)arg1 constrainedSize:(struct CGSize)arg2;
- (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (id)rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;
- (unsigned long long)nearestTextIndexAtPosition:(struct CGPoint)arg1;
- (id)textCheckingResultAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)trailingRect;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (vector_b5e32e34)visibleRanges;

@end
