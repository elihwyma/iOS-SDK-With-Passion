/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSString, VOSCommand;

@interface VOSCommandProfileValidation : NSObject

{
    long long _validationType;
    VOSCommand *_previouslyBoundCommand;
}

@property (nonatomic, readonly) _Bool isSuccessful;
@property (nonatomic, readonly) _Bool isGestureAlreadyAssignedToCommand;
@property (nonatomic, readonly) _Bool isGestureAssignedToOtherCommand;
@property (nonatomic, readonly) _Bool isKeyboardShortcutAlreadyAssignedToCommand;
@property (nonatomic, readonly) _Bool isKeyboardShortcutAssignedToOtherCommand;
@property (nonatomic, readonly) NSString *localizedErrorTitle;
@property (nonatomic, readonly) NSString *localizedErrorMessage;
@property (retain, nonatomic) VOSCommand *previouslyBoundCommand;

+ (id)successfulValidation;
+ (id)gestureAssignedToOtherCommandValidation:(id)arg1;
+ (id)keyboardShortcutAssignedToOtherCommandValidation:(id)arg1;

- (id)init;
- (id)initWithType:(long long)arg1;

@end
