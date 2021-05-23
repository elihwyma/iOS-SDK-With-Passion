/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject

{
    struct os_unfair_lock_s _stateLock;
    NSArray *_validSizes;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    ML3Artwork *_artwork;
}

@property (weak, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (retain, nonatomic) ML3Artwork *artwork;
@property (nonatomic, readonly) struct os_unfair_lock_s stateLock;
@property (nonatomic, readonly) NSArray *validSizes;
@property (copy, nonatomic, readonly) NSURL *originalFileURL;
@property (copy, nonatomic) NSDictionary *effectsMetadata;

+ (_Bool)artworkExistsForRequest:(id)arg1;
+ (_Bool)needsToFetchArtworkForRequest:(id)arg1;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)imageFileURLForSize:(struct CGSize)arg1;
- (id)imageFileURLForEffect:(id)arg1;

@end
