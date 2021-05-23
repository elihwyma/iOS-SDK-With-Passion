/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSDictionary, NSNumber, NSString, SAMPMediaItem, SAMPNowPlayingQueuePosition, SANPCommandInfo, SANPVideoAudioAndSubtitleLanguageOptions;

@interface SAMPQueueState : AceObject

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) SANPVideoAudioAndSubtitleLanguageOptions *audioAndSubtitleLanguageOptions;
@property (nonatomic) _Bool currentItemSteerable;
@property (copy, nonatomic) NSDictionary *currentListeningToContainer;
@property (retain, nonatomic) SAMPMediaItem *listeningToItem;
@property (retain, nonatomic) SAMPMediaItem *nextListeningToItem;
@property (retain, nonatomic) SANPCommandInfo *nowPlayingCommandInfo;
@property (retain, nonatomic) SAMPNowPlayingQueuePosition *playbackQueuePosition;
@property (copy, nonatomic) NSNumber *playbackRate;
@property (retain, nonatomic) SAMPMediaItem *previousListenedToItem;
@property (copy, nonatomic) NSNumber *shuffleEnabled;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queueState;
+ (id)queueStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
