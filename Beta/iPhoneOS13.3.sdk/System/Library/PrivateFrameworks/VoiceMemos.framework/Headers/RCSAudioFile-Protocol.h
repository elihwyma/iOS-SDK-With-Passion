/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@class AVAudioFormat, NSDictionary, NSURL;

@protocol RCSAudioFile <Swift>

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) AVAudioFormat *fileFormat;
@property (nonatomic, readonly) AVAudioFormat *processingFormat;
@property (nonatomic, readonly) NSDictionary *settings;

@end
