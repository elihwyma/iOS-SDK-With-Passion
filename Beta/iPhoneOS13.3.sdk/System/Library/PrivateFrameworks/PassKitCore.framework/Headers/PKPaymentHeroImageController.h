/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString, PKPaymentHeroImageManifest, PKPaymentWebService;

@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject

{
    PKPaymentWebService *_webService;
    NSString *_primaryImageIdentifier;
    NSArray *_featuredImages;
    PKPaymentHeroImageManifest *_manifest;
    id <PKPaymentHeroImageControllerDelegate> _delegate;
    long long _watchSize;
}

@property (copy, nonatomic) NSString *primaryImageIdentifier;
@property (copy, nonatomic) NSArray *featuredImages;
@property (nonatomic, readonly) PKPaymentHeroImageManifest *manifest;
@property (nonatomic) id <PKPaymentHeroImageControllerDelegate> delegate;
@property (nonatomic) long long watchSize;

+ (id)defaultImages;
+ (struct CGSize)cardArtSizeForWatchViewSize:(struct CGSize)arg1;

- (id)featuredImageIdentifiers;
- (id)initWithManifest:(id)arg1 webService:(id)arg2;
- (id)filterImages:(id)arg1;
- (id)featuredDefaultImages;
- (void)downloadImages:(id)arg1;
- (struct CGSize)cardArtSizeForSize:(struct CGSize)arg1;

@end
