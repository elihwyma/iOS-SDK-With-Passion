/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WLKArtworkVariantListing : NSObject

{
    NSArray *_artworkVariants;
}

@property (copy, nonatomic, readonly) NSArray *artworkVariants;

- (id)initWithArtworkDictionary:(id)arg1;
- (id)bestArtworkVariantOfType:(long long)arg1 forSize:(struct CGSize)arg2;
- (id)bestArtworkVariantForSize:(struct CGSize)arg1;
- (id)artworkVariantOfType:(long long)arg1;

@end
