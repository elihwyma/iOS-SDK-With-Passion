/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@class BSProcessHandle;

@protocol NSCopying;

@protocol BSServiceConnectionContext

@property (nonatomic, readonly) BSProcessHandle *remoteProcess;
@property (nonatomic, readonly) id <NSCopying> userInfo;

@end
