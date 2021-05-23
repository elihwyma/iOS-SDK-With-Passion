/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class NSString, _DKEventStream;

@interface BMItemType : NSObject

{
    NSString *_identifier;
    Class _valueClass;
    long long _edge;
    _DKEventStream *_eventStream;
    CDUnknownBlockType _valueExtractBlock;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) Class valueClass;
@property (nonatomic) long long edge;
@property (retain, nonatomic) _DKEventStream *eventStream;
@property (copy, nonatomic) CDUnknownBlockType valueExtractBlock;

+ (id)dayOfWeek;
+ (id)hourOfDay;
+ (id)interactionSender;
+ (id)interactionDirection;
+ (id)interactionRecipients;
+ (id)interactionTargetBundleID;
+ (id)isWeekend;
+ (id)hourOfDaySlot;
+ (id)interactionUTIType;
+ (id)interactionContentURL;
+ (id)locationIdentifier;
+ (id)interactionPhotoContact;
+ (id)interactionPhotoScene;
+ (id)interactionSharingSourceBundleID;
+ (id)bundleIdOfHostOpenedShareExtension;
+ (id)bundleIdOfShareExtensionOpened;
+ (id)allItemTypes;
+ (id)relevanceCoarseAppActivityHash;
+ (id)relevanceAppActivityHash;
+ (id)relevanceCoarseIntentHash;
+ (id)relevanceIntentHash;
+ (id)appIntentClass;
+ (id)appActivityType;
+ (id)firstBacklightAfterWakeup;
+ (id)bluetoothConnectedToDevice;
+ (id)bluetoothConnectedToDeviceWithName;
+ (id)bluetoothConnectedToDeviceWithAddress;
+ (id)mediaIsPlaying;
+ (id)mediaGenreStartedPlaying;
+ (id)allItemTypesDictionary;
+ (id)appOpened;
+ (id)appLaunchedReason;
+ (id)appInFocus;
+ (id)interactionMechanism;
+ (id)interactionPhotoLocation;
+ (id)interactionTextTopic;
+ (id)interactionItemTypes;
+ (id)connectedToExternalAudioOutput;
+ (id)allRegisteredItemTypes;
+ (void)registerItemType:(id)arg1;
+ (void)unregisterItemType:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)extractEventFromDKEvent:(id)arg1;
- (id)extractValueFromDKEvent:(id)arg1;
- (id)extractItemFromDKEvent:(id)arg1;

@end
