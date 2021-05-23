/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SKUIArtwork;

@interface SKUIArtworkList : NSObject

{
    NSMutableArray *_artworks;
}

@property (nonatomic, readonly, getter=_lookupArray) NSArray *_lookupArray;
@property (copy, nonatomic) NSArray *artworks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (nonatomic, readonly) SKUIArtwork *largestArtwork;
@property (nonatomic, readonly) SKUIArtwork *smallestArtwork;

+ (_Bool)supportsSecureCoding;
+ (id)artworkForSize:(long long)arg1 artworkDictionaries:(id)arg2;
+ (_Bool)canHandleArtworkFormat:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasArtwork;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)artworkForSize:(long long)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)bestArtworkForSize:(struct CGSize)arg1;
- (id)artworkWithWidth:(long long)arg1;
- (id)bestArtworkForScaledSize:(struct CGSize)arg1;
- (id)preferredExactArtworkForSize:(struct CGSize)arg1;
- (id)initWithArtworkListArray:(id)arg1;
- (id)initWithLookupArray:(id)arg1;

@end
