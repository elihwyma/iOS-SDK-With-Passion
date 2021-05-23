/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (MPCMediaRemoteController)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct _MRMediaRemoteCommandInfo *)commandInfoForCommand:(unsigned int)arg1;
- (id)_allCommandInfos;

@end
