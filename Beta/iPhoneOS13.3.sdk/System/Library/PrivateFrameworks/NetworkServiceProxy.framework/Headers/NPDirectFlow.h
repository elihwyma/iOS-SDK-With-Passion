/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSPConnectionInfo;

@interface NPDirectFlow : NSObject

{
    struct nw_protocol _protocol;
    NSNumber *_identifier;
    NSPConnectionInfo *_connectionInfo;
    NSDate *_startDate;
    NSDate *_connectionStartDate;
    NSDate *_firstTxByteTimestamp;
}

@property (readonly) NSNumber *identifier;
@property (readonly) struct nw_protocol *protocol;
@property (retain) NSPConnectionInfo *connectionInfo;
@property (readonly) NSDate *startDate;
@property (retain) NSDate *connectionStartDate;
@property (retain) NSDate *firstTxByteTimestamp;

+ (void)initializeProtocol;

- (id)initWithParameters:(id)arg1;
- (void)handleDetachedFromProtocol;
- (void)createConnectionInfo;

@end
