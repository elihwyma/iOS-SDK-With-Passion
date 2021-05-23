/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VNMPImageDescriptor : NSObject

{
    long long _internalNonSerializedDescriptorId;
    float _quality;
    float _nextLeafDescriptorDistance;
    float _previousLeafDescriptorDistance;
    float _nextLeafTotalDistance;
    float _previousLeafTotalDistance;
    NSString *_externalImageId;
    long long _exifTimestamp;
    void *_colorGaborDescriptor;
    void *_sceneClassifierDescriptor;
    void *_imageRegistrationDescriptor;
    long long _previousLeafId;
    long long _nextLeafId;
    long long _nextLeafTimestampDistance;
    long long _previousLeafTimestampDistance;
    NSString *_imageFilePath;
}

@property long long previousLeafId;
@property long long nextLeafId;
@property float nextLeafDescriptorDistance;
@property float previousLeafDescriptorDistance;
@property long long nextLeafTimestampDistance;
@property long long previousLeafTimestampDistance;
@property float nextLeafTotalDistance;
@property float previousLeafTotalDistance;
@property (readonly) NSData *rawColorGaborDescriptor;
@property (readonly) NSString *imageFilePath;
@property (readonly) long long descriptorId;
@property (readonly) NSString *externalImageId;
@property (readonly) long long exifTimestamp;
@property (readonly) float quality;
@property (readonly) void *colorGaborDescriptor;
@property (readonly) void *sceneClassifierDescriptor;
@property (readonly) void *imageRegistrationDescriptor;
@property (nonatomic, readonly) unsigned long long serializedLength;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)currentVersion;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)initWithImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (id)initWithImageData:(id)arg1 andCustomQualityScore:(float)arg2 context:(id)arg3 error:(id *)arg4;
- (_Bool)computeConvnetDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)computeDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)computeRegistrationFeaturesForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)computeQualityForImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (float)distanceFromDescriptor:(id)arg1;
- (float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg1 andSceneClassifierDistance:(float)arg2;
- (id)initWithRawColorGaborDescriptor:(id)arg1;

@end
