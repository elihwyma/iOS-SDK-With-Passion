/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSVoiceTriggerInfo : NSObject

{
    long long _firstPassRunningMode;
}

@property (nonatomic) long long firstPassRunningMode;

+ (id)sharedInstance;

- (id)init;

@end
