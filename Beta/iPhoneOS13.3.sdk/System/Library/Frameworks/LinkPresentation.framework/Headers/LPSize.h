/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPSize : NSObject

{
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property (retain, nonatomic, readonly) LPPointUnit *width;
@property (retain, nonatomic, readonly) LPPointUnit *height;
@property (nonatomic, readonly) struct CGSize asSize;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSquareSize:(double)arg1;

@end
