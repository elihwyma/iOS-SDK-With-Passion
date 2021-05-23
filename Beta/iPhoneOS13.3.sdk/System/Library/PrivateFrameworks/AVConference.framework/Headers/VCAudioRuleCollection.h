/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioRuleCollection : NSObject

{
    NSMutableArray *_rules;
    int _deviceRole;
    _Bool _allowAudioSwitching;
    _Bool _allowAudioRecording;
    int _aacBlockSize;
    NSMutableArray *_secondaryPayloads;
}

@property (nonatomic) int aacBlockSize;
@property (nonatomic, readonly) NSArray *rules;
@property (nonatomic, readonly) NSArray *secondaryPayloads;
@property (nonatomic) _Bool allowAudioSwitching;
@property (nonatomic) _Bool allowAudioRecording;

+ (int)getForcedPayload;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setRules:(id)arg1;
- (void)setupAudioRulesWithSBR:(_Bool)arg1 isContinuity:(_Bool)arg2;
- (void)addAudioPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3;
- (void)addAudioRule:(id)arg1;
- (void)clearAudioRules;
- (void)addAudioRules:(id)arg1;
- (id)initWithPhoneContinuity:(_Bool)arg1 allowAudioSwitching:(_Bool)arg2 sbr:(_Bool)arg3 aacBlockSize:(int)arg4;
- (id)initPrimaryPayload:(int)arg1 dtxPayload:(int)arg2 redPayload:(int)arg3 secondaryPayloads:(id)arg4 allowAudioSwitching:(_Bool)arg5 sbr:(_Bool)arg6 aacBlockSize:(int)arg7;
- (_Bool)isPayloadSupported:(int)arg1;

@end
