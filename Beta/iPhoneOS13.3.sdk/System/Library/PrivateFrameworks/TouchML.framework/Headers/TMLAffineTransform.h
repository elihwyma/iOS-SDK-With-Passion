/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLAffineTransform : NSObject

{
    struct CGAffineTransform _transform;
}

@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) double a;
@property (nonatomic, readonly) double b;
@property (nonatomic, readonly) double c;
@property (nonatomic, readonly) double d;
@property (nonatomic, readonly) double tx;
@property (nonatomic, readonly) double ty;

+ (void)initializeJSContext:(id)arg1;

- (id)CGAffineTransformValue;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end
