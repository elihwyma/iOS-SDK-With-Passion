/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VNFaceprint;

__attribute__((visibility("hidden")))
@interface VCPFaceTimeFace : NSObject

{
    VNFaceprint *_faceprint;
}

@property (retain, nonatomic) VNFaceprint *faceprint;

+ (id)face;
+ (id)faceFromManagedObject:(id)arg1;

- (id)description;
- (id)managedObjectForContext:(id)arg1;

@end
