/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MIPMultiverseIdentifier, MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <Swift>

{
    MIPMultiverseIdentifier *_multiverseIdentifier;
}

@property (nonatomic, readonly) _Bool isDownloadable;
@property (nonatomic, readonly) _Bool isDownloadableStoreOffer;
@property (nonatomic, readonly) _Bool isPurchasableStoreOffer;
@property (nonatomic, readonly) long long preferredStoreOfferVariant;
@property (nonatomic, readonly) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MPMediaItem *representativeItem;
@property (nonatomic, readonly) MIPMultiverseIdentifier *multiverseIdentifier;
@property (nonatomic, readonly) unsigned long long persistentID;

+ (_Bool)supportsSecureCoding;
+ (_Bool)canFilterByProperty:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (id)genericModelObjectWithRequestedProperties:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)invalidateCachedProperties;
- (id)cachedValueForProperty:(id)arg1 isCached:(_Bool *)arg2;
- (id)buyOfferForVariant:(long long)arg1;
- (id)buyOffer;
- (id)completionOfferForVariant:(long long)arg1;

@end
