/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXVoicemailAction.h>

@interface CXSetPlayedVoicemailAction : CXVoicemailAction

{
    _Bool _played;
}

@property (nonatomic, getter=isPlayed) _Bool played;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)initWithVoicemailUUID:(id)arg1 played:(_Bool)arg2;

@end
