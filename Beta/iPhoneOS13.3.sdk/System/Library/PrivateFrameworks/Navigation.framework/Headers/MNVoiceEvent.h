/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNVoiceEvent : NSObject

{
    _Bool _isPrivate;
    unsigned long long _options;
    NSString *_textToSpeak;
    unsigned long long _shortPromptType;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSString *textToSpeak;
@property (nonatomic, readonly) unsigned long long shortPromptType;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;
@property (nonatomic, readonly) _Bool isPrivate;

+ (id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)isValidShortPromptType:(unsigned long long)arg1;

- (id)description;
- (_Bool)isEqualToEvent:(id)arg1;
- (id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
