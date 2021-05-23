/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@interface CACUserHintsManager : NSObject

{
    double _lastPruneTime;
}

+ (void)initialize;
+ (id)sharedManager;

- (id)init;
- (void)clearHistory;
- (_Bool)shouldDisplayUserHintAfterRegisteringIdentifier:(id)arg1;
- (id)suggestedCommandIdentifiersFromActiveCommandIdentifiers:(id)arg1 maximumCount:(long long)arg2;
- (unsigned long long)_countAfterRegisteringUserHintIdentifier:(id)arg1;

@end
