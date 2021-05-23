/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, SLFacebookAlbum, SLFacebookPlace, SLFacebookPostPrivacySetting;

@interface SLFacebookPost : NSObject <Swift>

{
    NSMutableArray *_imageData;
    NSMutableArray *_imageAssetURLs;
    NSMutableArray *_videoData;
    NSMutableArray *_videoAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_text;
    NSString *_videoExportPreset;
    NSURL *_link;
    SLFacebookPlace *_place;
    SLFacebookAlbum *_album;
    SLFacebookPostPrivacySetting *_privacySetting;
    NSArray *_taggedUserIDs;
}

@property (retain) NSString *text;
@property (retain) NSArray *imageData;
@property (retain) NSArray *imageAssetURLs;
@property (retain) NSArray *videoData;
@property (retain) NSArray *videoAssetURLs;
@property (retain) NSString *videoExportPreset;
@property (retain) NSURL *link;
@property (retain) SLFacebookPlace *place;
@property (retain) SLFacebookAlbum *album;
@property (retain) SLFacebookPostPrivacySetting *privacySetting;
@property (retain) NSString *maskedApplicationID;
@property (retain) NSArray *taggedUserIDs;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addImageData:(id)arg1;
- (void)addImageAssetURL:(id)arg1;
- (void)addVideoData:(id)arg1;
- (void)addVideoAssetURL:(id)arg1;
- (id)_encodableObjectProperties;

@end
