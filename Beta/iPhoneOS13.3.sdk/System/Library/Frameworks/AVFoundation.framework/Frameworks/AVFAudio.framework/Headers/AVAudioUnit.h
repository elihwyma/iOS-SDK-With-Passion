/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioNode.h>

@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode

@property (nonatomic, readonly) struct AudioComponentDescription audioComponentDescription;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance *audioUnit;
@property (nonatomic, readonly) AUAudioUnit *AUAudioUnit;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) unsigned long long version;

+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;
- (_Bool)loadAudioUnitPresetAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)setValue:(float)arg1 forParam:(unsigned int)arg2;
- (float)valueForParam:(unsigned int)arg1;

@end
