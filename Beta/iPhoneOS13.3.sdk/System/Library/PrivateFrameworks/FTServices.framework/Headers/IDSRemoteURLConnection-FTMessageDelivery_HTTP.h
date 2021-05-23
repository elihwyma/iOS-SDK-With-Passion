/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <IDSFoundation/IDSRemoteURLConnection.h>

@class NSString, NSURLRequest;

@interface IDSRemoteURLConnection (FTMessageDelivery_HTTP)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool requireIDSHost;
@property _Bool forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property _Bool shouldUsePipelining;
@property int concurrentConnections;
@property _Bool disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property _Bool shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) CDUnknownBlockType block;

@end
