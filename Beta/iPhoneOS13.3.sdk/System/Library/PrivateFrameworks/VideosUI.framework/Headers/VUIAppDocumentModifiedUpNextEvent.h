/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/Swift-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <Swift>

{
    NSSet *_addedCanonicalIDs;
    NSSet *_removedCanonicalIDs;
}

@property (copy, nonatomic) NSSet *addedCanonicalIDs;
@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)coalescedEvent:(id)arg1;
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2;
- (id)initWithAddedCanonicalIDs:(id)arg1 removedCanonicalIDs:(id)arg2;

@end
