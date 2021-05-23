/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSUserActivity.h>

@class NSString;

@interface NSUserActivity (MediaPlayerAdditions)

@property (copy, nonatomic) NSString *externalMediaContentIdentifier;

- (void)_setExternalMediaContentBundleIdentifier:(id)arg1;
- (id)_externalMediaContentBundleIdentifier;

@end
