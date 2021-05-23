/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedback.h>

@class NSMutableArray, NSString, NSTimer;

@interface _UIFeedbackPattern : _UIFeedback

{
    _Bool _highPriority;
    _Bool _isRepeating;
    double _duration;
    NSMutableArray *_feedbacks;
    NSTimer *_repeatTimer;
}

@property (retain, nonatomic) NSMutableArray *feedbacks;
@property (nonatomic, readonly) _Bool isRepeating;
@property (retain, nonatomic) NSTimer *repeatTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isHighPriority) _Bool highPriority;
@property (nonatomic) double duration;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

+ (id)type;
+ (_Bool)supportsSecureCoding;
+ (id)feedbackPattern;
+ (Class)_parametersClass;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)stop;
- (id)dictionaryRepresentation;
- (void)setPosition:(float)arg1;
- (void)play;
- (void)addFeedback:(id)arg1 atTime:(double)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)_debugDictionary;
- (id)_individualFeedbacks;
- (id)_playableProtocol;
- (id)_allEventTypes;
- (id)_allSystemSoundIDs;
- (void)_playPattern;

@end
