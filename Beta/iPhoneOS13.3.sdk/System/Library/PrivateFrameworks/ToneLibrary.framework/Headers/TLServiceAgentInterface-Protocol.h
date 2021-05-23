/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/Swift-Protocol.h>

@protocol TLServiceAgentInterface <Swift>

- (unsigned short)retrieveCurrentTonePreferencesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setCurrentToneIdentifier:keyedByTopic:forPreferenceKey:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveUserGeneratedVibrationPatternsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserGeneratedVibrationPatterns:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllUserGeneratedVibrationPatternsWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
