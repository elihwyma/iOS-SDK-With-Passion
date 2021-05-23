/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BurstFaceConfigEntry : NSObject

{
    int faceId;
    struct CGRect faceRect;
    int framesSinceLast;
}

@property int faceId;
@property struct CGRect faceRect;
@property int framesSinceLast;

- (id)initWithRect:(struct CGRect)arg1 withFaceId:(int)arg2;

@end
