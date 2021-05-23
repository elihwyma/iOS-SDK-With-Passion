/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceConfigEntry : NSObject

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
