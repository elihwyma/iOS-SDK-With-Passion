/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaCollectionViewModel : NSObject

{
    NSArray *_seasonViewModels;
    NSDictionary *_seasonBySeasonIdentifier;
    NSDictionary *_episodeShelfViewControllerBySeasonIdentifier;
    NSDictionary *_productLockupViewBySeasonIdentifier;
    NSDictionary *_episodesBySeasonIdentifer;
}

@property (retain, nonatomic) NSArray *seasonViewModels;
@property (retain, nonatomic) NSDictionary *seasonBySeasonIdentifier;
@property (retain, nonatomic) NSDictionary *episodeShelfViewControllerBySeasonIdentifier;
@property (retain, nonatomic) NSDictionary *productLockupViewBySeasonIdentifier;
@property (retain, nonatomic) NSDictionary *episodesBySeasonIdentifer;
@property (nonatomic, readonly) _Bool hasContent;

@end
