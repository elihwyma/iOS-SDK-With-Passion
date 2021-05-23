/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXLayoutBlueprint;

@protocol SXDOM;

@interface SXLayoutResult : NSObject

{
    SXLayoutBlueprint *_blueprint;
    id <SXDOM> _DOM;
    double _duration;
}

@property (nonatomic, readonly) SXLayoutBlueprint *blueprint;
@property (nonatomic, readonly) id <SXDOM> DOM;
@property (nonatomic, readonly) double duration;

- (id)initWithLayoutBlueprint:(id)arg1 DOM:(id)arg2 duration:(double)arg3;

@end
