/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

__attribute__((visibility("hidden")))
@interface FaceRecognizer : VEiOSSharedObject

{
    _Bool _highAccuracy;
}

@property (nonatomic) _Bool highAccuracy;

+ (id)sharedRecognizer;

- (id)facesInImage:(id)arg1;
- (struct CGRect)containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2;
- (struct CGRect)containingRect:(id)arg1;

@end
