/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPMediaPlaylistCreationMetadata : NSObject

{
    NSString *_defaultAuthorDisplayName;
    NSString *_name;
    NSString *_authorDisplayName;
    NSString *_descriptionText;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic) NSString *authorDisplayName;
@property (copy, nonatomic) NSString *descriptionText;

- (id)init;
- (id)initWithName:(id)arg1;

@end
