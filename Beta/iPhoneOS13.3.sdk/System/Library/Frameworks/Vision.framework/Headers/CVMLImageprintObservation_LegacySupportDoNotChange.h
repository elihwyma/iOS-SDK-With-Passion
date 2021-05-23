/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/CVMLObservation_LegacySupportDoNotChange.h>

@class MPImageDescriptor_LegacySupportDoNotChange, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange

{
    NSUUID *_identifier;
    MPImageDescriptor_LegacySupportDoNotChange *_imageprintDescriptor;
    NSString *_imageprintType;
    NSString *_imageprintVersion;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;
- (id)serializeAsVNImageprintStateAndReturnError:(id *)arg1;

@end
