/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXVoicemailAction.h>

@interface CXSetTrashedVoicemailAction : CXVoicemailAction

{
    _Bool _trashed;
}

@property (nonatomic, getter=isTrashed) _Bool trashed;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)initWithVoicemailUUID:(id)arg1 trashed:(_Bool)arg2;

@end
