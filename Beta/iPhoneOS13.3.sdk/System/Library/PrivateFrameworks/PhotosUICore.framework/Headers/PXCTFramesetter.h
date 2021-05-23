/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSShadow;

@interface PXCTFramesetter : NSObject

{
    _Bool _prepared;
    NSAttributedString *_attributedString;
    struct CGContext *_context;
    const struct __CTFramesetter *_framesetter;
    NSShadow *_shadow;
}

@property (nonatomic, readonly) const struct __CTFramesetter *framesetter;
@property (nonatomic, readonly) NSShadow *shadow;
@property (copy, nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct CGContext *context;

- (id)init;
- (void)dealloc;
- (void)prepare;
- (id)initWithAttributedString:(id)arg1 context:(struct CGContext *)arg2;
- (id)frameWithRect:(struct CGRect)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(_Bool)arg3;

@end
