/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject

{
    MPCPlayerResponse *_response;
    MPModelGenericObject *_metadataObject;
}

@property (weak, nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) MPModelGenericObject *metadataObject;

- (id)remove;
- (id)initWithModelGenericObject:(id)arg1 response:(id)arg2;

@end
