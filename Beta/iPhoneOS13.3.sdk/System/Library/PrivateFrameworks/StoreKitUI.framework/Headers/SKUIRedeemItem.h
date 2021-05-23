/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItem.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString;

@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIRedeemItem : SKUIItem <Swift>

{
    id <SKUIArtworkProviding> _artworks;
}

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) id <SKUIArtworkProviding> artworks;
@property (nonatomic) long long itemKind;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (struct _NSRange)ageBandRange;
- (id)largestArtworkURL;

@end
