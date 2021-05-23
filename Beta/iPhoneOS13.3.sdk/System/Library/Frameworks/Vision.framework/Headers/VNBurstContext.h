/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class BurstImageSetInternal;

__attribute__((visibility("hidden")))
@interface VNBurstContext : NSObject

{
    BurstImageSetInternal *_burstSet;
}

@property (copy, nonatomic) CDUnknownBlockType loggingCallback;

- (void)dealloc;
- (id)bestImageIdentifiers;
- (id)allImageIdentifiers;
- (_Bool)isAction;
- (_Bool)isPortrait;
- (id)coverImageIdentifier;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)allImageStats;
- (_Bool)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id *)arg4;
- (id)allClusters;

@end
