/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSError;

@protocol NSSecureCoding;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <Swift>

{
    id <NSSecureCoding> _remoteRequestOperationResponse;
    NSError *_remoteRequestOperationError;
}

@property (retain, nonatomic) id <NSSecureCoding> remoteRequestOperationResponse;
@property (retain, nonatomic) NSError *remoteRequestOperationError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2;

@end
