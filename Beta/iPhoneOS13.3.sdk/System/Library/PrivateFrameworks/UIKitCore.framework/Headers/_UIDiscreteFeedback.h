/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedback.h>

@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback

{
    _Bool _highPriority;
    long long _type;
}

@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isHighPriority) _Bool highPriority;

+ (id)type;
+ (_Bool)supportsSecureCoding;
+ (id)discreteFeedbackForType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)_effectiveSystemSoundID;
- (unsigned long long)_effectiveEventType;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)_debugDictionary;
- (id)_playableProtocol;
- (_Bool)isPlaying;

@end
