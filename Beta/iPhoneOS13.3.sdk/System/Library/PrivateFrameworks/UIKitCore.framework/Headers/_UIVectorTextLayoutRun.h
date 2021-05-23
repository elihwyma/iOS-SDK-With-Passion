/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, _UIVectorTextLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutRun : NSObject

{
    unsigned long long _glyphCount;
    NSAttributedString *_sourceString;
    _UIVectorTextLayoutInfo *_layoutInfo;
    unsigned long long _lineIndex;
    struct __CTRun *_runRef;
    double _baseline;
    struct CGRect _lineRect;
    struct CGRect _usedLineRect;
    struct CGRect _usedRunRect;
}

@property (nonatomic, readonly) struct __CTRun *_CTRun;
@property (nonatomic) double baseline;
@property (nonatomic) struct CGRect lineRect;
@property (nonatomic) struct CGRect usedLineRect;
@property (nonatomic) struct CGRect usedRunRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long lineIndex;

- (id)string;
- (void)dealloc;
- (id)font;
- (void)renderInContext:(struct CGContext *)arg1;
- (long long)glyphCount;
- (struct _NSRange)stringRange;
- (_Bool)shouldRender;
- (void)enumerateGlyphsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCTRun:(struct __CTRun *)arg1 lineIndex:(unsigned long long)arg2 layoutInfo:(id)arg3;
- (void)_enumerateGlyphsUsingBlock:(CDUnknownBlockType)arg1;

@end
