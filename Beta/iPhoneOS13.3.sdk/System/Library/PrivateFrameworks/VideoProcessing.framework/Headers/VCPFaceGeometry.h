/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface VCPFaceGeometry : NSObject

{
    MISSING_TYPE **_vertices;
    unsigned long long _vertexCount;
}

@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **vertices;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(const MISSING_TYPE **)arg1 vertexCount:(unsigned long long)arg2;

@end
