/*
 Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OSASyncProxyHandler;

@interface PCCEndpoint : NSObject

{
    id <OSASyncProxyHandler> _delegate;
    unsigned int _fileTimeout;
    NSArray *_deviceIds;
}

@property unsigned int fileTimeout;
@property (readonly) NSArray *deviceIds;

- (void)runWithDelegate:(id)arg1;
- (_Bool)isDeviceNearby:(id)arg1;
- (id)synchronize:(id)arg1 withOptions:(id)arg2;
- (id)send:(id)arg1 message:(id)arg2 error:(id *)arg3;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id *)arg4;

@end
