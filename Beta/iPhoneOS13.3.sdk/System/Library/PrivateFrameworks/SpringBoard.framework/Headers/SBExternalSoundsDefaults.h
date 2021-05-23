/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (nonatomic) _Bool keyboardPlaysSounds;
@property (nonatomic) _Bool systemHapticsEnabled;
@property (nonatomic) _Bool buttonsCanChangeRingerVolume;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
