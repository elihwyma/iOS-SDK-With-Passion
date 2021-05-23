/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, PXCTFramesetter;

@interface PXCTFrame : NSObject

{
    _Bool _prepared;
    _Bool _truncated;
    _Bool _allowTruncation;
    NSArray *_lines;
    const struct __CTFrame *_frame;
    unsigned long long _maximumLineCount;
    PXCTFramesetter *_framesetter;
    struct CGPoint _origin;
}

@property (nonatomic, readonly) const struct __CTFrame *frame;
@property (nonatomic, readonly) unsigned long long maximumLineCount;
@property (nonatomic, readonly) _Bool allowTruncation;
@property (weak, nonatomic, readonly) PXCTFramesetter *framesetter;
@property (nonatomic, readonly) struct CGPoint origin;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly, getter=isTruncated) _Bool truncated;

- (id)init;
- (void)dealloc;
- (void)prepare;
- (id)initWithFrame:(struct __CTFrame *)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(_Bool)arg3 framesetter:(id)arg4;
- (_Bool)_truncateLine:(inout const struct __CTLine **)arg1 withOrigin:(inout struct CGPoint *)arg2 referenceAttributedString:(inout id *)arg3 bounds:(struct CGRect)arg4;

@end
