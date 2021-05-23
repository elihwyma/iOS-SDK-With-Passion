/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MPImageDescriptor_LegacySupportDoNotChange : NSObject

{
    float _quality;
    float _nextLeafDescriptorDistance;
    float _previousLeafDescriptorDistance;
    float _nextLeafTotalDistance;
    float _previousLeafTotalDistance;
    long long _descriptorId;
    NSString *_externalImageId;
    long long _exifTimestamp;
    void *_colorGaborDescriptor;
    void *_sceneClassifierDescriptor;
    void *_imageRegistrationDescriptor;
    long long _previousLeafId;
    long long _nextLeafId;
    long long _nextLeafTimestampDistance;
    long long _previousLeafTimestampDistance;
    NSData *_rawColorGaborDescriptor;
    NSString *_imageFilePath;
}

@property (readonly) long long descriptorId;
@property (readonly) NSString *externalImageId;
@property (readonly) long long exifTimestamp;
@property (readonly) float quality;
@property (readonly) void *colorGaborDescriptor;
@property (readonly) void *sceneClassifierDescriptor;
@property (readonly) void *imageRegistrationDescriptor;
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

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;

@end
