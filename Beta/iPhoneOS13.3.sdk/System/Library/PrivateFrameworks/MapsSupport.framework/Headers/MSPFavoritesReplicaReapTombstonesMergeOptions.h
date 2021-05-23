/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaMergeOptionsReapTombstones.h>

@class NSString;

@interface MSPFavoritesReplicaReapTombstonesMergeOptions : MSPReplicaMergeOptionsReapTombstones

{
    _Bool _deserializationAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly, getter=isDeserializationAllowed) _Bool deserializationAllowed;

- (id)initWithDeserializationAllowed:(_Bool)arg1;

@end
