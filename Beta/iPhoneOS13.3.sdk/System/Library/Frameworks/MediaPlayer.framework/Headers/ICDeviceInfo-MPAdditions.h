/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <iTunesCloud/ICDeviceInfo.h>

@interface ICDeviceInfo (MPAdditions)

@property (nonatomic, readonly, getter=isMultiUserDevice) _Bool multiUserDevice;

@end
