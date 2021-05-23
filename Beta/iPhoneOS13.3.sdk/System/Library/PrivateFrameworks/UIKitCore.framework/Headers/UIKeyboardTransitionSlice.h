/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardTransitionSlice : NSObject

{
    struct CGRect _startRect;
    struct CGRect _endRect;
    UIKBCacheToken *_startToken;
    UIKBCacheToken *_endToken;
    _Bool _shiftContents;
    _Bool _delayCrossfade;
    int _normalization;
}

@property struct CGRect startRect;
@property struct CGRect endRect;
@property (retain) UIKBCacheToken *startToken;
@property (retain) UIKBCacheToken *endToken;
@property int normalization;
@property _Bool delayCrossfade;
@property (readonly) _Bool hasGeometry;

+ (id)sliceWithStart:(struct CGRect)arg1 end:(struct CGRect)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addStartRect:(struct CGRect)arg1 end:(struct CGRect)arg2;

@end
