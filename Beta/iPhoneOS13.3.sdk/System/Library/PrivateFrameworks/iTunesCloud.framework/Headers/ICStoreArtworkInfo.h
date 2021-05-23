/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreArtworkSizeInfo, NSArray, NSDictionary, NSURL;

@interface ICStoreArtworkInfo : NSObject <Swift>

{
    ICStoreArtworkSizeInfo *_sizeInfo;
    NSURL *_artworkURL;
    NSArray *_sortedResponseArray;
    NSArray *_sortedSupportedSizesArray;
    NSArray *_responseArray;
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic) NSArray *sortedResponseArray;
@property (copy, nonatomic) NSArray *sortedSupportedSizesArray;
@property (copy, nonatomic, readonly) NSURL *artworkURL;
@property (copy, nonatomic, readonly) NSArray *responseArray;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) ICStoreArtworkSizeInfo *sizeInfo;
@property (nonatomic, readonly) struct CGSize originalSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArtworkResponseDictionary:(id)arg1;
- (id)artworkURLWithSize:(struct CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3;
- (struct CGColor *)copyColorWithKind:(id)arg1;
- (id)initWithArtworkURL:(id)arg1;
- (id)initWithArtworkResponseArray:(id)arg1;
- (void)_sortResponseArray;
- (void)_sortSupportedSizesArray;
- (_Bool)_hasOriginalSize;
- (id)artworkURLWithSize:(struct CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(_Bool)arg4;
- (id)initWithArtworkResponseValue:(id)arg1;

@end
