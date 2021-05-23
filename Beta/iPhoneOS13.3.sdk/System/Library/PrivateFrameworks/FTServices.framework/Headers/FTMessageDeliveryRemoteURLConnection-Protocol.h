/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/Swift-Protocol.h>

@class MISSING_TYPE, NSString, NSURLRequest;

@protocol FTMessageDeliveryRemoteURLConnection <Swift>

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

- (MISSING_TYPE *)load;
- (MISSING_TYPE *)cancel;

@end
