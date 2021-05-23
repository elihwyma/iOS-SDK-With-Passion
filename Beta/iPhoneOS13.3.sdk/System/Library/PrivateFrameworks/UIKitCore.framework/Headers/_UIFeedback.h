/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSString, Protocol, _UIFeedbackParameters, _UIFeedbackPattern;

@protocol UICoordinateSpace, _UIFeedbackPlayer;

@interface _UIFeedback : NSObject <Swift>

{
    _Bool _playing;
    float _position;
    _UIFeedbackParameters *_audioParameters;
    _UIFeedbackParameters *_hapticParameters;
    long long _audioOutputMode;
    long long _hapticOutputMode;
    _UIFeedbackPattern *_parentPattern;
    double _delay;
    NSDictionary *_debugDictionary;
    NSString *_name;
    NSString *_category;
    unsigned long long _eventToken;
    id <UICoordinateSpace> _coordinateSpace;
    id <_UIFeedbackPlayer> _player;
}

@property (readonly) NSMutableArray *systemSoundSources;
@property (readonly) NSMutableArray *visualizerSources;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (weak, nonatomic, getter=_parentPattern, setter=_setParentPattern:) _UIFeedbackPattern *parentPattern;
@property (nonatomic, getter=_delay, setter=_setDelay:) double delay;
@property (nonatomic, readonly, getter=_debugDictionary) NSDictionary *debugDictionary;
@property (nonatomic, readonly, getter=_effectiveFeedbackData) NSArray *effectiveFeedbackData;
@property (copy, nonatomic, getter=_name, setter=_setName:) NSString *name;
@property (nonatomic, readonly, getter=_playableProtocol) Protocol *playableProtocol;
@property (retain, nonatomic, getter=_category, setter=_setCategory:) NSString *category;
@property (nonatomic, readonly, getter=_effectiveFeedbackTypes) unsigned long long effectiveFeedbackTypes;
@property (nonatomic, readonly, getter=_effectiveEnabledFeedbackTypes) unsigned long long effectiveEnabledFeedbackTypes;
@property (nonatomic, readonly, getter=_effectivePlayableFeedbackTypes) unsigned long long effectivePlayableFeedbackTypes;
@property (nonatomic, readonly, getter=_effectiveEventType) unsigned long long effectiveEventType;
@property (nonatomic, readonly, getter=_effectiveSystemSoundID) unsigned int effectiveSystemSoundID;
@property (nonatomic, readonly, getter=_effectiveDelay) double effectiveDelay;
@property (nonatomic, readonly, getter=_individualFeedbacks) NSArray *individualFeedbacks;
@property (nonatomic, readonly, getter=_allEventTypes) NSIndexSet *allEventTypes;
@property (nonatomic, readonly, getter=_allSystemSoundIDs) NSIndexSet *allSystemSoundIDs;
@property (nonatomic, getter=_eventToken, setter=_setEventToken:) unsigned long long eventToken;
@property (weak, nonatomic, getter=_coordinateSpace, setter=_setCoordinateSpace:) id <UICoordinateSpace> coordinateSpace;
@property (retain, nonatomic, getter=_player, setter=_setPlayer:) id <_UIFeedbackPlayer> player;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) _UIFeedbackParameters *audioParameters;
@property (nonatomic, readonly) _UIFeedbackParameters *hapticParameters;
@property (nonatomic) long long audioOutputMode;
@property (nonatomic) long long hapticOutputMode;
@property (nonatomic) float position;

+ (id)type;
+ (_Bool)supportsSecureCoding;
+ (Class)_parametersClass;
+ (id)feedbackWithDictionaryRepresentation:(id)arg1;
+ (Class)classForType:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)stop;
- (void)play;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;

@end
