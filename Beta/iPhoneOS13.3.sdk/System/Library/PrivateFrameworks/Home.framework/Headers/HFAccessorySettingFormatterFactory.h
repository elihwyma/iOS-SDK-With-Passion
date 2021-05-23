/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject

{
    NSMutableDictionary *_formattersForKey;
}

@property (retain, nonatomic) NSMutableDictionary *formattersForKey;

+ (id)defaultFactory;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriPersonalRequestsFormatter;

- (id)init;
- (id)formatterForKey:(id)arg1;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(_Bool)arg2;

@end
