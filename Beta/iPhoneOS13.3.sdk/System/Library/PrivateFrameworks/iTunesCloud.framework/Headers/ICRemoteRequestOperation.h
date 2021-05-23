/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

#import <iTunesCloud/Swift-Protocol.h>

@protocol NSSecureCoding;

@interface ICRemoteRequestOperation : ICRequestOperation <Swift>

{
    _Bool __shadowOperationForRemoteExecution;
    id <NSSecureCoding> _response;
}

@property (nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) _Bool _shadowOperationForRemoteExecution;
@property (retain, nonatomic) id <NSSecureCoding> response;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_execute;

@end
