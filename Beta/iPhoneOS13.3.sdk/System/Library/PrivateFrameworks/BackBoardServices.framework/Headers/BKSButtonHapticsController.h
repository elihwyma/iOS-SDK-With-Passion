/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@interface BKSButtonHapticsController : NSObject

+ (id)sharedInstance;

- (void)applyDefinitions:(id)arg1;
- (void)playHapticIdentifier:(long long)arg1 speed:(unsigned long long)arg2;

@end
