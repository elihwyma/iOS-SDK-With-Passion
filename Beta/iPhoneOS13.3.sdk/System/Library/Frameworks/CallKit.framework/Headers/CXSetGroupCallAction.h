/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction

{
    NSUUID *_callUUIDToGroupWith;
}

@property (copy, nonatomic) NSUUID *callUUIDToGroupWith;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)initWithCallUUID:(id)arg1 callUUIDToGroupWith:(id)arg2;

@end
