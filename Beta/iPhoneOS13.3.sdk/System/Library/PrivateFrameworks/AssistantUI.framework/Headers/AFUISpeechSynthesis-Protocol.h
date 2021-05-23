/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <AssistantUI/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol AFUISpeechSynthesis <Swift>

- (MISSING_TYPE *)invalidate;
- (MISSING_TYPE *)cancel;
- (MISSING_TYPE *)prewarmIfNeeded;
- (MISSING_TYPE *)enqueueText:identifier:language:gender:isPhonetic:provisionally:eligibleAfterDuration:delayed:canUseServerTTS:preparationIdentifier:completion:animationIdentifier:analyticsContext:speakableContextInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)enqueueText:identifier:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)enqueueAudioData:identifier:provisionally:eligibleAfterDuration:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)enqueuePhaticWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)processDelayedItem: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)skipCurrentSynthesis;

@end
