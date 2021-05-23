/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSNumber, NSString;

@interface WFPlaylistDescriptor : NSObject <Swift>

{
    _Bool _entireMusicLibrary;
    NSString *_playlistName;
    NSNumber *_persistentIdentifier;
}

@property (nonatomic, readonly) _Bool entireMusicLibrary;
@property (copy, nonatomic, readonly) NSString *playlistName;
@property (nonatomic, readonly) NSNumber *persistentIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntireMusicLibrary;
- (id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2;

@end
