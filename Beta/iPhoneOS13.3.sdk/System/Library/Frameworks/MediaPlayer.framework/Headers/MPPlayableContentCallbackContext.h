/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject

{
    _Bool _serviced;
    NSIndexPath *_indexPath;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) _Bool serviced;

- (id)initWithIndexPath:(id)arg1;

@end
