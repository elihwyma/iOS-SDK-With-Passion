/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorFaceTimeSettingsResults : NSObject

{
    _Bool _SIPDisabled;
    _Bool _secureMessagingRequired;
    unsigned int _faceTimeSwitches;
    _Bool _remoteFaceTimeSwitchesAvailable;
}

@property (nonatomic) _Bool SIPDisabled;
@property (nonatomic) _Bool secureMessagingRequired;
@property (nonatomic) _Bool remoteFaceTimeSwitchesAvailable;
@property (nonatomic) unsigned int faceTimeSwitches;

@end
