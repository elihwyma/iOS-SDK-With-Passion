/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class AXSSKeyChord, _VOSProfileCommand;

@interface _VOSProfileKeyChord : NSObject

{
    AXSSKeyChord *_keyChord;
    _VOSProfileCommand *_command;
}

@property (retain, nonatomic) AXSSKeyChord *keyChord;
@property (weak, nonatomic) _VOSProfileCommand *command;

+ (_Bool)supportsSecureCoding;
+ (id)profileKeyChordWithKeyChord:(id)arg1;
+ (id)profileKeyChordWithStringValue:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithKeyChord:(id)arg1;

@end
