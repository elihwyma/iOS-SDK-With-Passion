/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableSet;

@interface _MDLProbeCluster : NSObject

{
    NSMutableSet *_probes;
    MISSING_TYPE *_centroid;
}

@property MISSING_TYPE *centroid;
@property (retain) NSMutableSet *probes;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEmpty;
- (_Bool)isEqualToCluster:(id)arg1;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)arg1;

@end
