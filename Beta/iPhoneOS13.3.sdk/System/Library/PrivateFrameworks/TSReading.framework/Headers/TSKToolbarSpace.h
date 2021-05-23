/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKToolbarSpace : NSObject

{
    double _width;
}

@property (nonatomic) double width;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)spaceWithWidth:(double)arg1;

@end
