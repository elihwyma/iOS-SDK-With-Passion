/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject

{
    id _parentContext;
}

@property (nonatomic, readonly) id parentContext;
@property (nonatomic, readonly) NSArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)imageData;
- (long long)cameraPosition;
- (id)resultDataOfClass:(Class)arg1;
- (id)anchorsToAdd;
- (id)initWithParentContext:(id)arg1;
- (id)captureGatheredData;
- (id)anchorsToRemove;

@end
