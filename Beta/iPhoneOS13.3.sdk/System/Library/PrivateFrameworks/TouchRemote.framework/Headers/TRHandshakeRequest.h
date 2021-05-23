/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@interface TRHandshakeRequest : TRRequestMessage

{
    long long _protocolVersion;
}

@property (nonatomic) long long protocolVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
