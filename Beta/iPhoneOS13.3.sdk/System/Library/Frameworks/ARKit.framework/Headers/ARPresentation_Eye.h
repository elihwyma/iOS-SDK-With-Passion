/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer;

@interface ARPresentation_Eye : NSObject

{
    id <MTLBuffer> _distortionVertexBuffer;
    id <MTLBuffer> _distortionIndexBuffer;
    unsigned long long _distortionIndexCount;
    unsigned long long _distortionIndexType;
    unsigned long long _primitiveType;
    CDStruct_4b2885c7 _viewport;
}

@property (retain, nonatomic) id <MTLBuffer> distortionVertexBuffer;
@property (retain, nonatomic) id <MTLBuffer> distortionIndexBuffer;
@property (nonatomic) unsigned long long distortionIndexCount;
@property (nonatomic) unsigned long long distortionIndexType;
@property (nonatomic) CDStruct_4b2885c7 viewport;
@property (nonatomic) unsigned long long primitiveType;

@end
