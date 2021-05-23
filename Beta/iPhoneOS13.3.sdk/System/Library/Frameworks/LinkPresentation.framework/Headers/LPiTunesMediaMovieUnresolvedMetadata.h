/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPiTunesMediaAsset, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMovieUnresolvedMetadata : NSObject

{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_genre;
    LPiTunesMediaAsset *_artwork;
    NSArray *_offers;
}

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (retain, nonatomic) NSArray *offers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)resolve;
- (id)assetsToFetch;

@end
