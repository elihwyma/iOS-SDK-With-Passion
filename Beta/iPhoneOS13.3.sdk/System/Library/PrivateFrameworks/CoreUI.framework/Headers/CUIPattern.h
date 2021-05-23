/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIPattern : NSObject

{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    double _alpha;
}

@property (nonatomic) double alpha;

- (void)dealloc;
- (id)description;
- (struct CGPattern *)pattern;
- (struct CGPattern *)_newPattern;
- (id)initWithImageRef:(struct CGImage *)arg1;
- (void)setPatternInContext:(struct CGContext *)arg1;
- (struct CGImage *)patternImageRef;

@end
