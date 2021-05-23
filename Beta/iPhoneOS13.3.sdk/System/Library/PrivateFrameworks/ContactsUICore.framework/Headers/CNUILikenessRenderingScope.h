/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class PRMonogramColor;

@interface CNUILikenessRenderingScope : NSObject

{
    _Bool _rightToLeft;
    double _scale;
    double _strokeWidth;
    struct CGColor *_strokeColor;
    unsigned long long _style;
    PRMonogramColor *_color;
    struct CGSize _pointSize;
}

@property (nonatomic, readonly) struct CGSize pointSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double strokeWidth;
@property (nonatomic, readonly) struct CGColor *strokeColor;
@property (nonatomic, readonly) _Bool rightToLeft;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) PRMonogramColor *color;

+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(_Bool)arg5 style:(unsigned long long)arg6 color:(id)arg7;
+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 rightToLeft:(_Bool)arg3 style:(unsigned long long)arg4 color:(id)arg5;

- (void)dealloc;
- (id)description;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (id)initWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(_Bool)arg5 style:(unsigned long long)arg6 color:(id)arg7;

@end
