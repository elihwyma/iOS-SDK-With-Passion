/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNOperationPoints;

__attribute__((visibility("hidden")))
@interface VNOperationPointsProvider : NSObject

{
    VNOperationPoints *_operationPoints;
}

- (id)operationPointsAndReturnError:(id *)arg1;
- (id)initWithOperationPoints:(id)arg1;

@end
