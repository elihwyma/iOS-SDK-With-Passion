/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWRemoteAttentionEvent

{
    long long _usagePage;
    long long _usage;
}

@property (nonatomic, readonly) long long usagePage;
@property (nonatomic, readonly) long long usage;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validateMask;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(struct AWRemoteMetadata *)arg3;

@end
