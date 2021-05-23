/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject <Swift>

{
    _Bool _shouldIgnoreImage;
    NSURL *_artworkURL;
    NSArray *_lookupItemArtworks;
    NSArray *_artworkInfoEntries;
    NSString *_cropStyle;
    NSString *_sourceEditorialArtworkKind;
}

@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSArray *lookupItemArtworks;
@property (copy, nonatomic) NSArray *artworkInfoEntries;
@property (copy, nonatomic) NSString *cropStyle;
@property (nonatomic) _Bool shouldIgnoreImage;
@property (copy, nonatomic) NSString *sourceEditorialArtworkKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringRepresentation;

@end
