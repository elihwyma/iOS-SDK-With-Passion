/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMActiveSound, AXMSoundComponent, NSString;

@interface AXMActiveSoundOutputActionHandleImpl : NSObject

{
    float _rate;
    float _pitch;
    AXMActiveSound *_activeSound;
    AXMSoundComponent *_soundComponent;
}

@property (weak, nonatomic) AXMActiveSound *activeSound;
@property (weak, nonatomic) AXMSoundComponent *soundComponent;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void)setQuantizedRate:(long long)arg1;

@end
