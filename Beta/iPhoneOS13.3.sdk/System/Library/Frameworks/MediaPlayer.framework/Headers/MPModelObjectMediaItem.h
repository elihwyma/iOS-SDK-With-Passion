/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPModelObject, NSDictionary;

@interface MPModelObjectMediaItem : MPNondurableMediaItem

{
    NSDictionary *_propertyValues;
    MPModelObject *_modelObject;
}

@property (nonatomic, readonly) MPModelObject *modelObject;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (id)_initWithPropertyValues:(id)arg1;

@end
