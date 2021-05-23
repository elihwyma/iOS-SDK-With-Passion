/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand

{
    _Bool _supportsSetQueueCommand;
    NSArray *_devices;
    NSDictionary *_supportedSpecializedQueues;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSDictionary *supportedSpecializedQueues;
@property (nonatomic) _Bool supportsSetQueueCommand;
@property (retain, nonatomic) NSSet *supportedQueueTypes;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *specializedIntents;

- (id)clear;
- (id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
- (id)replaceWithPlaybackIntent:(id)arg1;

@end
