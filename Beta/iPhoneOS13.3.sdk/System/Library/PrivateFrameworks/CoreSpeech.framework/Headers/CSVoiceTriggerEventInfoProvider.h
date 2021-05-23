/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject

{
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_rtsTriggerInfo;
}

@property (copy, nonatomic) NSDictionary *voiceTriggerInfo;
@property (copy, nonatomic) NSDictionary *rtsTriggerInfo;

+ (id)sharedInstance;

@end
