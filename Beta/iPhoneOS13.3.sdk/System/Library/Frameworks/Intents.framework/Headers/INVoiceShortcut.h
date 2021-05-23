/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INShortcut, NSString, NSUUID;

@interface INVoiceShortcut : NSObject <Swift>

{
    NSUUID *_identifier;
    NSString *_invocationPhrase;
    INShortcut *_shortcut;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSString *invocationPhrase;
@property (copy, nonatomic, readonly) INShortcut *shortcut;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intent;
- (id)userActivity;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3;
- (id)_initWithVCVoiceShortcut:(id)arg1;

@end
