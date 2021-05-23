/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class VOSGesture, _VOSProfileCommand;

@interface _VOSProfileGesture : NSObject

{
    VOSGesture *_gesture;
    _VOSProfileCommand *_command;
}

@property (retain, nonatomic) VOSGesture *gesture;
@property (weak, nonatomic) _VOSProfileCommand *command;

+ (_Bool)supportsSecureCoding;
+ (id)profileGestureWithGesture:(id)arg1;
+ (id)profileGestureWithStringValue:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithGesture:(id)arg1;

@end
