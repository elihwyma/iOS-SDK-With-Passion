/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSATSGlyphStorage, NSATSLineFragment;

@interface _NSATSTypesetterGuts : NSObject

{
    NSATSLineFragment *_lineFragment;
    NSATSGlyphStorage *_glyphStorage;
    unsigned long long _lastGlyphIndex;
    unsigned long long _lastContainerIndex;
    CDStruct_3fda14a5 *_typesetterAuxiliary;
    CDUnion_09a75e3c *_lineFragmentRectArgs;
    char *_bidiLevels;
    double _defaultTighteningFactor;
    unsigned long long _lineBreakStrategy;
    _Bool _isBusy;
    struct {
        unsigned int _isiChatTypesetter:1;
        unsigned int _resToWillSetLineFragmentRect:1;
        unsigned int _limitsLayoutForSuspiciousContents:1;
        unsigned int _baselineRendering:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _reserved:27;
    } _flags;
    struct {
        unsigned int _resolvedWritingDirection:2;
        unsigned int _reserved:30;
    } _paragraphState;
    struct __CTTypesetter *_ctTypesetter;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithTypesetter:(id)arg1;

@end
