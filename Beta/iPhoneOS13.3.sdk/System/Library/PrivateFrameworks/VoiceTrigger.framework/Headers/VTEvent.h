/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface VTEvent : NSObject

{
    NSURL *_jsonFileUrl;
    NSDictionary *_voiceTriggerEventInfo;
}

@property (nonatomic, readonly) NSURL *jsonFileUrl;
@property (nonatomic, readonly) NSDictionary *voiceTriggerEventInfo;

+ (id)eventFromURL:(id)arg1;
+ (long long)eventTypeFromURL:(id)arg1;

- (id)timestampString;
- (id)_packNumberFomVTEventInfo:(id)arg1 key:(id)arg2 format:(id)arg3;
- (id)_buildTitle;
- (id)_buildContent;
- (id)_buildDetail;
- (id)_buildTriggerContent;
- (id)_packAudioURLFromVTEventInfo:(id)arg1 key:(id)arg2;
- (id)_packStringContent:(id)arg1 value:(id)arg2;
- (id)_buildTriggerDetail;
- (id)eventTrackerDictionary;
- (id)initWithEventLogURL:(id)arg1;
- (void)_readJsonFile:(id)arg1;
- (id)jsonFileName;
- (id)_packStringFromVTEventInfo:(id)arg1 key:(id)arg2;
- (id)_packAudioContent:(id)arg1 filepath:(id)arg2;
- (id)_packBooleanFromVTEventInfo:(id)arg1 key:(id)arg2;

@end
