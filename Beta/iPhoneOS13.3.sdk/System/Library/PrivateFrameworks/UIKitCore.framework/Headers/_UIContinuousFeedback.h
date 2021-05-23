/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedback.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback

{
    double _duration;
    long long _type;
}

@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double duration;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

+ (id)type;
+ (_Bool)supportsSecureCoding;
+ (id)continuousFeedbackForType:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)_effectiveEventType;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;
- (id)_debugDictionary;
- (id)_playableProtocol;

@end
