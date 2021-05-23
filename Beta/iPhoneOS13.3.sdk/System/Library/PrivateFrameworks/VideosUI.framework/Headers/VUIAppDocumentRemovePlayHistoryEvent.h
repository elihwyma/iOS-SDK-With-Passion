/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/Swift-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <Swift>

{
    NSSet *_removedCanonicalIDs;
}

@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithRemovedCanonicalIDs:(id)arg1;

@end
