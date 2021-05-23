/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TLAlert;

@interface SBUISound : NSObject

{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned int _resolvedSystemSoundID;
    unsigned long long _soundBehavior;
    NSDictionary *_vibrationPattern;
    TLAlert *_toneAlert;
    CDUnknownBlockType _completionBlock;
    NSString *_songPath;
    long long _eventType;
}

@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID;
@property (nonatomic) unsigned long long soundBehavior;
@property (retain, nonatomic) NSDictionary *vibrationPattern;
@property (retain, nonatomic) TLAlert *toneAlert;
@property (copy, nonatomic) NSString *songPath;
@property (nonatomic) long long eventType;

+ (id)soundWithFeedbackEventType:(long long)arg1;

- (id)description;
- (void)stop;
- (CDUnknownBlockType)_completionBlock;
- (_Bool)isPlaying;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithToneAlertConfiguration:(id)arg1;
- (id)initWithToneAlert:(id)arg1;
- (_Bool)playInEvironments:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFeedbackEventType:(long long)arg1;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;

@end
