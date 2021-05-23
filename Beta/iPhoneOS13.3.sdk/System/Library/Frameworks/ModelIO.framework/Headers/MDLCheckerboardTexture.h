/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLTexture.h>

@interface MDLCheckerboardTexture : MDLTexture

{
    int _divisions;
    struct CGColor *_color1;
    struct CGColor *_color2;
}

@property (nonatomic) float divisions;
@property (nonatomic) struct CGColor *color1;
@property (nonatomic) struct CGColor *color2;

- (void)dealloc;
- (id)generateDataAtLevel:(long long)arg1;
- (id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(struct CGColor *)arg5 color1:(struct CGColor *)arg6 color2: /* Error: Ran out of types for this method. */;

@end
