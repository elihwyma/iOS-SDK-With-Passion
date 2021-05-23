/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface PKMetalParticleRenderCache : NSObject

{
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    unsigned long long _inkVersion;
}

@property (nonatomic, readonly) NSArray *buffers;
@property (nonatomic, readonly) unsigned long long inkVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (unsigned long long)cacheCost;
- (_Bool)needsCompute;
- (void)addBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 inkVersion:(unsigned long long)arg2;

@end
