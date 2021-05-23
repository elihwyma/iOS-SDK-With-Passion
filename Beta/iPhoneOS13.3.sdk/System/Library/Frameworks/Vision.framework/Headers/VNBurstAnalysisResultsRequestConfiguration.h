/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNBurstAnalysisResultsRequestConfiguration : VNRequestConfiguration

{
    _Bool _includeClusters;
    _Bool _includeAllImageIdentifiers;
    _Bool _includeAllImageStats;
}

@property (nonatomic) _Bool includeClusters;
@property (nonatomic) _Bool includeAllImageIdentifiers;
@property (nonatomic) _Bool includeAllImageStats;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
