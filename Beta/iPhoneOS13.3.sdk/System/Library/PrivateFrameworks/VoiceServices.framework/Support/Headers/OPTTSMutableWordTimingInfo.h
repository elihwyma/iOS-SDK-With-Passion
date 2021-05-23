/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSWordTimingInfo.h>

@class NSString;

@interface OPTTSMutableWordTimingInfo : OPTTSWordTimingInfo

@property (copy, nonatomic) NSString *word;
@property (nonatomic) unsigned int sample_idx;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) float timestamp;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
