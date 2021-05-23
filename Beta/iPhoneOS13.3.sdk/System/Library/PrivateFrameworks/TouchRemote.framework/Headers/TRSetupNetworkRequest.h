/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage

{
    NSString *_networkSSID;
    NSString *_networkPassword;
}

@property (copy, nonatomic) NSString *networkSSID;
@property (copy, nonatomic) NSString *networkPassword;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
