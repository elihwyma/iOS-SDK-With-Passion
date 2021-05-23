/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@protocol MTLTexture;

@interface PKMetalLiveStrokePaintRenderCache : NSObject

{
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    id <MTLTexture> _liveStrokeDestinationTexture;
    struct CGRect _liveStrokeDestinationFrame;
}

@property (nonatomic, readonly) NSArray *buffers;
@property (retain, nonatomic) id <MTLTexture> liveStrokeDestinationTexture;
@property (nonatomic) struct CGRect liveStrokeDestinationFrame;
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
