/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

@interface MPPlaybackArchiveDisplayProperties : NSObject <Swift>

{
    NSString *_title;
    NSString *_subtitle;
    NSData *_artworkImageData;
    NSMutableDictionary *_storage;
}

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSData *artworkImageData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 artworkImageData:(id)arg3;

@end
