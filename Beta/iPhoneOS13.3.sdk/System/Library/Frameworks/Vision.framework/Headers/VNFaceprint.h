/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelImageprint.h>

@interface VNFaceprint : VNEspressoModelImageprint

+ (_Bool)supportsSecureCoding;
+ (id)currentVersion;
+ (unsigned int)currentCodingVersion;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 error:(id *)arg2;

@end
