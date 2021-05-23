/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerSessionResponse, MPModelGenericObject, NSIndexPath, NSString;

@interface MPCPlayerSessionResponseItem : NSObject

{
    NSString *_contentItemIdentifier;
    MPModelGenericObject *_metadataObject;
    MPCPlayerSessionResponse *_response;
    NSIndexPath *_indexPath;
}

@property (weak, nonatomic, readonly) MPCPlayerSessionResponse *response;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *contentItemIdentifier;
@property (nonatomic, readonly) MPModelGenericObject *metadataObject;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)remove;
- (id)play;
- (id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3;
- (id)playOnPlayerPath:(id)arg1;

@end
