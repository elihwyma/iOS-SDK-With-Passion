/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSShadow, NSString, PXCTFrame;

@interface PXCTLine : NSObject

{
    _Bool _prepared;
    double _width;
    struct CGRect _imageBounds;
    _Bool _truncated;
    _Bool _endOfString;
    NSString *_string;
    const struct __CTLine *_line;
    PXCTFrame *_frame;
    NSAttributedString *_referenceAttributedString;
    double _ascent;
    double _descent;
    struct CGContext *_context;
    NSShadow *_shadow;
    struct _NSRange _stringRange;
    struct CGPoint _origin;
    struct CGAffineTransform _transform;
}

@property (nonatomic, readonly) const struct __CTLine *line;
@property (nonatomic, readonly) struct CGPoint origin;
@property (weak, nonatomic, readonly) PXCTFrame *frame;
@property (nonatomic, readonly) NSAttributedString *referenceAttributedString;
@property (nonatomic, readonly) double ascent;
@property (nonatomic, readonly) double descent;
@property (nonatomic, readonly) struct CGContext *context;
@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) struct _NSRange stringRange;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double ascentPosition;
@property (nonatomic, readonly) double baselinePosition;
@property (nonatomic, readonly) double descentPosition;
@property (nonatomic, readonly) struct CGPoint textPosition;
@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly) struct CGRect imageBounds;
@property (nonatomic, readonly, getter=isTruncated) _Bool truncated;
@property (nonatomic, readonly, getter=isEndOfString) _Bool endOfString;
@property (nonatomic, readonly) struct CGAffineTransform transform;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)scaleBy:(double)arg1;
- (void)prepare;
- (const struct CGPath *)createPath;
- (id)initWithLine:(struct __CTLine *)arg1 origin:(struct CGPoint)arg2 frame:(id)arg3 referenceAttributedString:(id)arg4 truncated:(_Bool)arg5;
- (void)draw;
- (void)translateHorizontallyBy:(double)arg1;
- (void)translateVerticallyBy:(double)arg1;
- (void)scaleVerticallyBy:(double)arg1;
- (void)_transformBy:(struct CGAffineTransform)arg1;

@end
