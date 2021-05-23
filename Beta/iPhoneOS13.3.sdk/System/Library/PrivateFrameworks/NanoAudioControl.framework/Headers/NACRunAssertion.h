/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface NACRunAssertion : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
}

- (id)init;

@end
