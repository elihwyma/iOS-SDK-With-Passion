/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNMPImageDescriptor;

@interface VNImageprint : NSObject

{
    unsigned long long _requestRevision;
    VNMPImageDescriptor *_descriptor;
    unsigned long long _type;
}

@property (retain, nonatomic) VNMPImageDescriptor *descriptor;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) unsigned long long serializedLength;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)serializeStateAndReturnError:(id *)arg1;
- (id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 requestRevision:(unsigned long long)arg3;
- (id)distanceToImageprint:(id)arg1 error:(id *)arg2;

@end
