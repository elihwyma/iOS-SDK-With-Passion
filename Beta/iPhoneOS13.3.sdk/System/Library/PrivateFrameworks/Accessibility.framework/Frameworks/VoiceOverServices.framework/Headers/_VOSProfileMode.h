/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, VOSScreenreaderMode;

@interface _VOSProfileMode : NSObject

{
    VOSScreenreaderMode *_mode;
    NSMutableSet *_commands;
}

@property (retain, nonatomic) VOSScreenreaderMode *mode;
@property (retain, nonatomic) NSMutableSet *commands;

+ (_Bool)supportsSecureCoding;
+ (id)profileModeWitMode:(id)arg1;
+ (id)profileModeWithStringValue:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addCommand:(id)arg1;
- (id)_initWithMode:(id)arg1 commands:(id)arg2;

@end
