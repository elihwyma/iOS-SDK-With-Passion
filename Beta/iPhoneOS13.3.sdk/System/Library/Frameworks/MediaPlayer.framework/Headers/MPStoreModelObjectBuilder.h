/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject

{
    _Bool _preventStoreItemMetadataCaching;
    MPPropertySet *_requestedPropertySet;
}

@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic) _Bool preventStoreItemMetadataCaching;

+ (id)allSupportedProperties;

- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2;

@end
