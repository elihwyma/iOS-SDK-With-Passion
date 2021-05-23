/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKInkFeatheringDescriptor : NSObject

{
    double _startCapTime;
    double _startCapFade;
    double _endCapTime;
    double _endCapFade;
}

@property (nonatomic) double startCapTime;
@property (nonatomic) double startCapFade;
@property (nonatomic) double endCapTime;
@property (nonatomic) double endCapFade;

+ (id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4;

@end
