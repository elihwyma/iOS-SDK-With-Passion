/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSArray, NSString;

@interface VNSmartCamObservation : VNObservation

{
    NSArray *_smartCamprints;
    NSString *_smartCamprintVersion;
}

@property (copy, nonatomic) NSArray *smartCamprints;
@property (copy, nonatomic, readonly) NSString *smartCamprintVersion;

+ (_Bool)supportsSecureCoding;
+ (id)smartCamprintCurrentVersion;
+ (id)observationWithSmartCamprints:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2;

@end
