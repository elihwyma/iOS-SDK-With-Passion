/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <Swift>

{
    ICRemoteRequestOperation *_remoteRequestOperation;
    long long _qualityOfService;
}

@property (nonatomic, readonly) ICRemoteRequestOperation *remoteRequestOperation;
@property (nonatomic) long long qualityOfService;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRequestOperation:(id)arg1;

@end
