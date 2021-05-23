/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UIDictationPhrase : NSObject

{
    NSString *_text;
    NSArray *_alternativeInterpretations;
    long long _style;
}

@property (nonatomic) long long style;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSArray *alternativeInterpretations;

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;
+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;

@end
