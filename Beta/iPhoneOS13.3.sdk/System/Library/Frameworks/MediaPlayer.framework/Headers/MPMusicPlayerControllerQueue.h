/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSUUID;

@interface MPMusicPlayerControllerQueue : NSObject <Swift>

{
    NSMutableArray *_items;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) NSMutableArray *mutableItems;
@property (nonatomic, readonly) NSUUID *uuid;
@property (copy, nonatomic, readonly) NSArray *items;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItems:(id)arg1 uuid:(id)arg2;

@end
