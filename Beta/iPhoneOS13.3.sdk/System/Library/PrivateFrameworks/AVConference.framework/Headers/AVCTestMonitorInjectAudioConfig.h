/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVCTestMonitorInjectAudioConfig : NSObject

{
    int _injectAudioConfigType;
    double _amplitude;
    NSString *_audioFileName;
}

@property (nonatomic) int injectAudioConfigType;
@property (nonatomic) double amplitude;
@property (nonatomic) NSString *audioFileName;

@end
