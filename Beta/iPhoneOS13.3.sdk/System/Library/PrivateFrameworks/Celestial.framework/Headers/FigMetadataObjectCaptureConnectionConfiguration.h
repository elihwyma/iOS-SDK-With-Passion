/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

{
    NSArray *_metadataIdentifiers;
    struct CGRect _metadataRectOfInterest;
    int _faceTrackingMaxFaces;
    _Bool _faceTrackingUsesFaceRecognition;
}

@property (copy, nonatomic) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect metadataRectOfInterest;
@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) _Bool faceTrackingUsesFaceRecognition;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
