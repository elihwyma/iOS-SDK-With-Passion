/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOClientMetrics, NSData, NSError, NSString, NSURL;

@protocol GEORequestCounterTicket, NSObject;

@protocol GEODataSessionTask <Swift>

@property (nonatomic, readonly) NSData *receivedData;
@property (copy, nonatomic, readonly) NSURL *downloadedFileURL;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) _Bool protocolBufferHasPreamble;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) _Bool failedDueToCancel;
@property (nonatomic, readonly) id <GEORequestCounterTicket> requestCounterTicket;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) id <NSObject> parsedResponse;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) _Bool mptcpNegotiated;
@property (nonatomic, readonly) _Bool receivedRNFNotification;

- (unsigned short)cancel;
- (unsigned short)start;

@end
