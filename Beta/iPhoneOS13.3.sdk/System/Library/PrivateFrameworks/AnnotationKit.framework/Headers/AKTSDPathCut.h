/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKTSDPathCut : NSObject

{
    long long mSegment;
    double mT;
    double mSkew;
}

@property (nonatomic, readonly) long long segment;
@property (nonatomic, readonly) double t;
@property (nonatomic, readonly) double skew;

- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3;

@end
