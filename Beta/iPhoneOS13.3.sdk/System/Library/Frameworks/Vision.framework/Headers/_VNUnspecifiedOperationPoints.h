/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNOperationPoints.h>

__attribute__((visibility("hidden")))
@interface _VNUnspecifiedOperationPoints : VNOperationPoints

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;

@end
