/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXVoicemailAction : CXAction

{
    NSUUID *_voicemailUUID;
}

@property (copy, nonatomic) NSUUID *voicemailUUID;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;

@end
