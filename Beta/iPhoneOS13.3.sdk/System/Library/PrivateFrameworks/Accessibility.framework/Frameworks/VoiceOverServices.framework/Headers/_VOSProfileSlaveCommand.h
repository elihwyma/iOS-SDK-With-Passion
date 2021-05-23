/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class VOSCommand, _VOSProfileCommand;

@interface _VOSProfileSlaveCommand : NSObject

{
    VOSCommand *_command;
    unsigned long long _context;
    unsigned long long _pressCount;
    _VOSProfileCommand *_masterProfileCommand;
}

@property (retain, nonatomic) VOSCommand *command;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long pressCount;
@property (weak, nonatomic) _VOSProfileCommand *masterProfileCommand;

+ (_Bool)supportsSecureCoding;
+ (id)profileSlaveCommandWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
+ (id)profileSlaveCommandWithStringValue:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;

@end
