/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@interface FBSOrientationUpdate : NSObject

{
    long long _orientation;
    double _duration;
    long long _rotationDirection;
    unsigned long long _sequenceNumber;
}

@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) double duration;
@property (nonatomic) long long rotationDirection;

- (id)init;
- (id)description;
- (id)initWithOrientation:(long long)arg1 sequenceNumber:(unsigned long long)arg2 duration:(double)arg3 rotationDirection:(long long)arg4;

@end
