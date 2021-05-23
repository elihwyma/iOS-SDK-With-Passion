/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceInfo : NSObject

{
    int swFaceId;
    int swLastFrameSeen;
    int hwFaceId;
    int hwLastFrameSeen;
    struct CGPoint swCenter;
    struct CGSize swSize;
    struct CGPoint hwCenter;
    struct CGSize hwSize;
}

@property int swFaceId;
@property struct CGPoint swCenter;
@property struct CGSize swSize;
@property int swLastFrameSeen;
@property int hwFaceId;
@property struct CGPoint hwCenter;
@property struct CGSize hwSize;
@property int hwLastFrameSeen;

- (id)init;
- (struct CGRect)hwFaceRect;
- (struct CGRect)swFaceRect;
- (float)overlapWithHwRect:(struct CGRect)arg1;
- (float)overlapWithSwRect:(struct CGRect)arg1;

@end
