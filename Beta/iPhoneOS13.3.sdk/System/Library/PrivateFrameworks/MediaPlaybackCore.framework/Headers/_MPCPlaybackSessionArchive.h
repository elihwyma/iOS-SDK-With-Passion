/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, NSDate, NSString, UIImage;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage

{
    MPNowPlayingContentItem *_contentItem;
    UIImage *_artworkImage;
    NSString *_identifier;
    NSDate *_lastModifiedDate;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) MPNowPlayingContentItem *contentItem;
@property (copy, nonatomic) UIImage *artworkImage;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;

+ (id)packageTypeIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithURL:(id)arg1;
- (_Bool)writeWithError:(id *)arg1;
- (_Bool)saveWithError:(id *)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;

@end
