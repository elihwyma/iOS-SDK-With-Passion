/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface PKMetalStrokeRenderCache : NSObject

{
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
}

@property (nonatomic, readonly) NSArray *buffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (unsigned long long)inkVersion;
- (unsigned long long)cacheCost;
- (_Bool)needsCompute;
- (void)addBuffer:(id)arg1;

@end
