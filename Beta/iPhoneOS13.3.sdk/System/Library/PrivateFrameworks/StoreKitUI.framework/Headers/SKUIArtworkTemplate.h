/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, SKUIArtwork;

@interface SKUIArtworkTemplate : NSObject

{
    long long _height;
    long long _width;
    NSString *_urlTemplateString;
    NSMutableSet *_servedArtworks;
}

@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) NSString *urlTemplateString;
@property (nonatomic, readonly) NSMutableSet *servedArtworks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (nonatomic, readonly) SKUIArtwork *largestArtwork;
@property (nonatomic, readonly) SKUIArtwork *smallestArtwork;

+ (_Bool)supportsSecureCoding;
+ (_Bool)canHandleArtworkFormat:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasArtwork;
- (id)_lookupDictionary;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)artworkForSize:(long long)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)bestArtworkForSize:(struct CGSize)arg1;
- (id)artworkWithWidth:(long long)arg1;
- (id)bestArtworkForScaledSize:(struct CGSize)arg1;
- (id)preferredExactArtworkForSize:(struct CGSize)arg1;
- (id)initWithTemplateDictionary:(id)arg1;
- (id)_artworkWithWidth:(long long)arg1;
- (id)_urlStringWithTargetSize:(struct CGSize)arg1;
- (struct CGSize)_sizeForWidth:(long long)arg1;
- (id)_artworkURLWithWidth:(long long)arg1;

@end
