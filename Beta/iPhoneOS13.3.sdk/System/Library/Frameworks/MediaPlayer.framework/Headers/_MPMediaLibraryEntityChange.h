/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject

{
    MPMediaEntity *_entity;
    NSString *_anchor;
    long long _deletionType;
}

@property (nonatomic, readonly) MPMediaEntity *entity;
@property (copy, nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) long long deletionType;

- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3;

@end
