/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioRecordContext;

@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject

{
    _Bool _requiresHistoricalBuffer;
    _Bool _useCustomizedRecordSettings;
    _Bool _lpcmIsFloat;
    _Bool _isSiri;
    unsigned int _lpcmBitDepth;
    unsigned int _numberOfChannels;
    unsigned int _encoderBitRate;
    CSAudioRecordContext *_recordContext;
    long long _audioFormat;
    double _sampleRate;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;
@property (retain, nonatomic) CSAudioRecordContext *recordContext;
@property (nonatomic) _Bool requiresHistoricalBuffer;
@property (nonatomic) _Bool useCustomizedRecordSettings;
@property (nonatomic) long long audioFormat;
@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int lpcmBitDepth;
@property (nonatomic) _Bool lpcmIsFloat;
@property (nonatomic) unsigned int numberOfChannels;
@property (nonatomic) unsigned int encoderBitRate;
@property (nonatomic) _Bool isSiri;

+ (id)defaultRequestWithContext:(id)arg1;
+ (id)requestForLpcmRecordSettingsWithContext:(id)arg1;
+ (id)requestForOpusRecordSettingsWithContext:(id)arg1;
+ (id)requestForSpeexRecordSettingsWithContext:(id)arg1;

- (id)initWithXPCObject:(id)arg1;

@end
