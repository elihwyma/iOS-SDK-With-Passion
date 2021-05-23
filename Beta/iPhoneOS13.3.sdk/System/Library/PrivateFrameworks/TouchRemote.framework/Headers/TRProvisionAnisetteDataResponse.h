/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@interface TRProvisionAnisetteDataResponse : TRResponseMessage

{
    _Bool _didSucceed;
}

@property (nonatomic) _Bool didSucceed;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
