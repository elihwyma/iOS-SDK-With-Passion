/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLPoint : NSObject

{
    struct CGPoint _point;
}

@property (nonatomic, readonly) struct CGPoint point;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;

+ (void)initializeJSContext:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CGPointValue;
- (id)initWithPoint:(struct CGPoint)arg1;

@end
