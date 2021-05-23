/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLSize : NSObject

{
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;

+ (void)initializeJSContext:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)CGSizeValue;
- (id)min:(double)arg1:(double)arg2;
- (id)max:(double)arg1:(double)arg2;
- (id)extend:(double)arg1:(double)arg2;
- (id)scale:(double)arg1:(double)arg2;
- (id)asRect;

@end
