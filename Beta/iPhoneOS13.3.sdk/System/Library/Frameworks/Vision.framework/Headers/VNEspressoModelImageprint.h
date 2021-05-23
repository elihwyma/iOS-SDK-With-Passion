/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface VNEspressoModelImageprint : NSObject

{
    NSDictionary *_labelsAndConfidence;
    unsigned long long _requestRevision;
    unsigned long long _elementType;
    NSData *_descriptorData;
    unsigned long long _elementCount;
    unsigned long long _lengthInBytes;
    unsigned long long _confidenceScoreType;
    NSString *_version;
    long long _distanceMode;
}

@property (retain) NSData *descriptorData;
@property unsigned long long elementCount;
@property unsigned long long lengthInBytes;
@property long long distanceMode;
@property (copy) NSDictionary *labelsAndConfidence;
@property (copy) NSString *version;
@property (readonly) unsigned long long elementType;
@property (nonatomic, readonly) unsigned long long confidenceScoreType;
@property (nonatomic, readonly) unsigned long long serializedLength;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)serializeStateAndReturnError:(id *)arg1;
- (id)_initWithClassKeyMappedCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 forCodingVersion:(unsigned int)arg2;

@end
