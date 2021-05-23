/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXAction.h>

@class NSString, NSUUID;

@interface CXSendMMIOrUSSDCodeAction : CXAction

{
    NSString *_code;
    long long _ttyType;
    NSUUID *_senderIdentityUUID;
}

@property (copy, nonatomic) NSString *code;
@property (nonatomic) long long ttyType;
@property (retain, nonatomic) NSUUID *senderIdentityUUID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;

@end
