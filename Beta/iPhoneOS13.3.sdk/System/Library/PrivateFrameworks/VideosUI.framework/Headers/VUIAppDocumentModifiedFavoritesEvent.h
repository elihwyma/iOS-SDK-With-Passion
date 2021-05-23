/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/Swift-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <Swift>

{
    NSSet *_addedEntityIDs;
    NSSet *_removedEntityIDs;
}

@property (copy, nonatomic) NSSet *addedEntityIDs;
@property (copy, nonatomic) NSSet *removedEntityIDs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithAddedEntityIDs:(id)arg1 removedEntityIDs:(id)arg2;
- (id)initWithAction:(unsigned long long)arg1 entityID:(id)arg2;
- (id)coalescedEvent:(id)arg1;

@end
