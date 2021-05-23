/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWFaceDetectAttentionEvent

{
    _Bool _metadataValid;
    double _pitch;
    double _yaw;
    double _roll;
    unsigned long long _orientation;
}

@property (nonatomic, readonly, getter=isMetadataValid) _Bool metadataValid;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double yaw;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) unsigned long long orientation;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validateMask;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 faceMetadata:(struct AWFaceDetectMetadata *)arg3;

@end
