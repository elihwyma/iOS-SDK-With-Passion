/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechniqueGatherContext.h>

@class NSMutableArray;

@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext

{
    NSMutableArray *_gatheredData;
}

- (id)initWithParentContext:(id)arg1;
- (void)addResultData:(id)arg1;
- (id)gatheredData;

@end
