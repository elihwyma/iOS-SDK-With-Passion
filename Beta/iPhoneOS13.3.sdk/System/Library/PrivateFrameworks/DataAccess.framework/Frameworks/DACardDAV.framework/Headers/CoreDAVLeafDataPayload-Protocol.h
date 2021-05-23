/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <DACardDAV/Swift-Protocol.h>

@class MISSING_TYPE, NSArray, NSData, NSString, NSURL;

@protocol CoreDAVLeafDataPayload <Swift>

@property (retain, nonatomic) NSURL *serverID;
@property (nonatomic, readonly) NSData *dataPayload;
@property (nonatomic, readonly) NSString *syncKey;
@property (nonatomic, readonly) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;

- (MISSING_TYPE *)initWithURL:eTag:dataPayload:inContainerWithURL:withAccountInfoProvider: /* Error: Ran out of types for this method. */;

@end
