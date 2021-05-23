/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject

{
    _Bool _mirrored;
    NSArray *_detectedFaces;
    NSDictionary *_faceMeshPayload;
}

@property (retain, nonatomic) NSArray *detectedFaces;
@property (retain, nonatomic) NSDictionary *faceMeshPayload;
@property (nonatomic, getter=isMirrored) _Bool mirrored;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(_Bool)arg2 stripDetectionData:(_Bool)arg3;

@end
