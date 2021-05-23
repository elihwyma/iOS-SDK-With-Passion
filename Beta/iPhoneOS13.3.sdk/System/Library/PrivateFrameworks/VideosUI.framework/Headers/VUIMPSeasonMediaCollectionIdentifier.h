/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMPMediaEntityIdentifier.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier

{
    NSNumber *_seasonNumber;
}

@property (copy, nonatomic) NSNumber *seasonNumber;

+ (id)requiredMPPropertyNames;
+ (id)seasonIdentifierWithMediaItem:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;
- (id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2;

@end
