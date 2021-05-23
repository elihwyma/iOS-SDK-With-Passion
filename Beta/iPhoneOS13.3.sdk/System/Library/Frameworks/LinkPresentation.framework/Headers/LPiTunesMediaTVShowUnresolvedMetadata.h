/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPiTunesMediaAsset, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaTVShowUnresolvedMetadata : NSObject

{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    LPiTunesMediaAsset *_artwork;
}

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)resolve;
- (id)assetsToFetch;

@end
