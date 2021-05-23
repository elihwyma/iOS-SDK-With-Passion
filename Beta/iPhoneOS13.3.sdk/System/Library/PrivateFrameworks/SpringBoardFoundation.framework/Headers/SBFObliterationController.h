/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFObliterationController : NSObject

+ (id)sharedInstance;

- (void)_doObliterateWithType:(struct __CFString *)arg1 eraseDataPlan:(_Bool)arg2 showingProgress:(_Bool)arg3 options:(id)arg4;
- (void)wipeAndBrickShowingProgress:(_Bool)arg1 reason:(id)arg2;
- (void)obliterateDataPartitionShowingProgress:(_Bool)arg1 skipDataObliteration:(_Bool)arg2 eraseDataPlan:(_Bool)arg3 reason:(id)arg4;
- (void)markObliterationStart;

@end
