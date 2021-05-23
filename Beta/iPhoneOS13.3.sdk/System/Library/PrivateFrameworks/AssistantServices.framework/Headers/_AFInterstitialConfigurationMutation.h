/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFInterstitialConfiguration, NSString;

@interface _AFInterstitialConfigurationMutation : NSObject

{
    AFInterstitialConfiguration *_baseModel;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    _Bool _isVoiceTrigger;
    _Bool _isDucking;
    _Bool _isTwoShot;
    unsigned long long _speechEndHostTime;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasStyle:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasRecordRoute:1;
        unsigned int hasIsVoiceTrigger:1;
        unsigned int hasIsDucking:1;
        unsigned int hasIsTwoShot:1;
        unsigned int hasSpeechEndHostTime:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setStyle:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setGender:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setRecordRoute:(id)arg1;
- (void)setIsVoiceTrigger:(_Bool)arg1;
- (void)setIsDucking:(_Bool)arg1;
- (void)setIsTwoShot:(_Bool)arg1;
- (void)setSpeechEndHostTime:(unsigned long long)arg1;

@end
