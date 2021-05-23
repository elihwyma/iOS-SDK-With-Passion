/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFeaturePrintObservation.h>

@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation

{
    NSArray *_sceneprints;
    NSString *_sceneprintVersion;
}

@property (nonatomic, readonly) NSArray *sceneprints;
@property (copy, nonatomic, readonly) NSString *sceneprintVersion;

+ (_Bool)supportsSecureCoding;
+ (id)sceneprintCurrentVersion;
+ (id)observationWithSceneprints:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (unsigned long long)elementType;
- (unsigned long long)elementCount;
- (id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2;

@end
