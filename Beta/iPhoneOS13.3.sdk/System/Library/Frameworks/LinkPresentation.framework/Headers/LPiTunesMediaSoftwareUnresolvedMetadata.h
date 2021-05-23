/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPiTunesMediaAsset, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject

{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_subtitle;
    NSString *_genre;
    NSString *_platform;
    NSNumber *_isHiddenFromSpringboard;
    NSNumber *_hasMessagesExtension;
    LPiTunesMediaAsset *_icon;
    LPiTunesMediaAsset *_messagesAppIcon;
    NSArray *_screenshots;
    LPiTunesMediaAsset *_previewVideo;
}

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSNumber *isHiddenFromSpringboard;
@property (copy, nonatomic) NSNumber *hasMessagesExtension;
@property (retain, nonatomic) LPiTunesMediaAsset *icon;
@property (retain, nonatomic) LPiTunesMediaAsset *messagesAppIcon;
@property (retain, nonatomic) NSArray *screenshots;
@property (retain, nonatomic) LPiTunesMediaAsset *previewVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)resolve;
- (id)assetsToFetch;

@end
