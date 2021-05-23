/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNOperationPoints : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)errorForUnknownClassificationIdentifier:(id)arg1;
+ (id)errorForUnimplementedMethod:(SEL)arg1;
+ (id)unspecifiedOperationPoints;
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;

@end
