/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupAuthenticationResponse : TRResponseMessage

{
    NSSet *_unauthenticatedAccountServices;
}

@property (retain, nonatomic) NSSet *unauthenticatedAccountServices;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
