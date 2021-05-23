/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSOpportuneSpeakListenerDeviceManager : NSObject

{
    NSString *_deviceId;
}

@property (copy, nonatomic) NSString *deviceId;

+ (id)sharedManager;

@end
