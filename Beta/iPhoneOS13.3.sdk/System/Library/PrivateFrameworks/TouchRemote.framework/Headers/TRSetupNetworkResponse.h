/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupNetworkResponse : TRResponseMessage

{
    _Bool _hasNetwork;
}

@property (nonatomic) _Bool hasNetwork;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
