/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXCallAction : CXAction

{
    NSUUID *_callUUID;
}

@property (copy, nonatomic) NSUUID *callUUID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCallUUID:(id)arg1;

@end
