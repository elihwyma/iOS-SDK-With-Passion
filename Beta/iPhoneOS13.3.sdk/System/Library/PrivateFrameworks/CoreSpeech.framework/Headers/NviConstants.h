/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface NviConstants : NSObject

+ (unsigned int)inputRecordingNumberOfChannels;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+ (unsigned int)numChannelsForNviDirectionality;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (struct AudioStreamBasicDescription)monoChannelLpcmASBD;
+ (struct AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+ (id)nviLogsRootDir;

@end
