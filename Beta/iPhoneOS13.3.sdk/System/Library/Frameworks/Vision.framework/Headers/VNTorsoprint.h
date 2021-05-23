/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelImageprint.h>

@interface VNTorsoprint : VNEspressoModelImageprint

+ (id)currentVersion;
+ (unsigned int)currentCodingVersion;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (id)emptyVNTorsoprintForRevision:(unsigned long long)arg1;

@end
