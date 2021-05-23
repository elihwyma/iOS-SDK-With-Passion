/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAudioFileManager : NSObject

+ (id)_sharedAudioLoggingQueue;
+ (void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2;
+ (id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_getDateLabel;
+ (void)pruneNumberOfLogFilesTo:(unsigned long long)arg1;
+ (void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2;
+ (id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForRemoteVADWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterFromWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1;
+ (void)removeLogFilesOlderThanNDays:(float)arg1;
+ (id)audioFileWriterForAttentiveSiri;

@end
