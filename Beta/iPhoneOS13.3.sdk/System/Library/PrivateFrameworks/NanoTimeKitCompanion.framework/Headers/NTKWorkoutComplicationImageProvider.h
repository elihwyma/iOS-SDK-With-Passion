/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKit/CLKImageProvider.h>

@interface NTKWorkoutComplicationImageProvider : CLKImageProvider

{
    _Bool _paused;
    _Bool _frozen;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, getter=isFrozen) _Bool frozen;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
