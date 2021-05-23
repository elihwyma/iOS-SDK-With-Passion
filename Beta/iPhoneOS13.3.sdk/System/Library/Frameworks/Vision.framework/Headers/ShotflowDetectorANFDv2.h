/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/ShotflowDetector.h>

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANFDv2 : ShotflowDetector

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;

- (id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2;
- (id)initWithNetwork:(id)arg1;
- (id)nmsBoxes:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (id)mergeHeadsBoxes:(id)arg1;

@end
