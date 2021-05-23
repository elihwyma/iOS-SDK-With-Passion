/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARODTResult : NSObject

{
    unsigned long long _detectedObjectID;
    void *_imageContext;
    double _estimatedScaleFactor;
    CDStruct_14d5dc5e _visionTransform;
}

@property (nonatomic) unsigned long long detectedObjectID;
@property (nonatomic) CDStruct_14d5dc5e visionTransform;
@property (nonatomic) void *imageContext;
@property (nonatomic) double estimatedScaleFactor;

@end
