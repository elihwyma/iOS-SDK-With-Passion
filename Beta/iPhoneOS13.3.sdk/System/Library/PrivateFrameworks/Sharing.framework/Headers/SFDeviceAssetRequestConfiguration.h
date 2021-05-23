/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@interface SFDeviceAssetRequestConfiguration : NSObject

{
    CDUnknownBlockType _queryResultHandler;
    double _timeout;
    CDUnknownBlockType _downloadCompletionHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType queryResultHandler;
@property (nonatomic) double timeout;
@property (copy, nonatomic) CDUnknownBlockType downloadCompletionHandler;

- (id)description;
- (id)initWithQueryResultHandler:(CDUnknownBlockType)arg1;

@end
