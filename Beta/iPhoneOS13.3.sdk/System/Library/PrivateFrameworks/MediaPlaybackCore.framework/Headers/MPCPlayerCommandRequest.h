/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCMediaRemoteController, MPCPlayerPath, NSDictionary, NSString;

@interface MPCPlayerCommandRequest : NSObject

{
    unsigned int _command;
    NSDictionary *_options;
    NSDictionary *_userInitiatedOptions;
    MPCMediaRemoteController *_controller;
    MPCPlayerPath *_playerPath;
    NSString *_label;
}

@property (nonatomic, readonly) unsigned int command;
@property (copy, nonatomic, readonly) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *userInitiatedOptions;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (copy, nonatomic) NSString *label;

- (void)setCommandOptionValue:(id)arg1 forKey:(id)arg2;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 controller:(id)arg3 label:(id)arg4;

@end
