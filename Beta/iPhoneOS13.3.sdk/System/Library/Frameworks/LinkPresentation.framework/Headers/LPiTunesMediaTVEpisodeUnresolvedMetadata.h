/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPiTunesMediaAsset, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaTVEpisodeUnresolvedMetadata : NSObject

{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_episodeName;
    NSString *_seasonName;
    NSString *_genre;
    LPiTunesMediaAsset *_artwork;
}

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *episodeName;
@property (copy, nonatomic) NSString *seasonName;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)resolve;
- (id)assetsToFetch;

@end
