/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKBaseSound.h>

@class NSString;

@interface STKSystemSound : STKBaseSound

{
    unsigned int _systemSoundID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_reallyPlaySound;
- (void)_reallyStopSound;
- (id)initForSystemSoundID:(unsigned int)arg1 duration:(double)arg2;

@end
