/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject

{
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (void)stopSuppressingKeyboardWithReason:(id)arg1;
- (void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)_setKeyboardSuppressed:(_Bool)arg1 forReason:(id)arg2 withPredicate:(CDUnknownBlockType)arg3;

@end
