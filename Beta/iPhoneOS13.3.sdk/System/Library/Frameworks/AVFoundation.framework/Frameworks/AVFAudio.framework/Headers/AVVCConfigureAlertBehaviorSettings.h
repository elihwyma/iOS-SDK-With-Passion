/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVVCConfigureAlertBehaviorSettings : NSObject

{
    unsigned long long _streamID;
    long long _startAlert;
    long long _stopAlert;
    long long _stopOnErrorAlert;
}

@property (nonatomic) unsigned long long streamID;
@property (nonatomic) long long startAlert;
@property (nonatomic) long long stopAlert;
@property (nonatomic) long long stopOnErrorAlert;

- (id)initWithStreamID:(unsigned long long)arg1;

@end
