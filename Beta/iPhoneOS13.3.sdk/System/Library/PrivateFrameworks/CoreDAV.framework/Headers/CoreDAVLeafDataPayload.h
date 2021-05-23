/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, NSURL;

@interface CoreDAVLeafDataPayload : NSObject

{
    NSURL *_serverID;
    NSString *_syncKey;
    NSData *_dataPayload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSURL *serverID;
@property (nonatomic, readonly) NSData *dataPayload;
@property (nonatomic, readonly) NSString *syncKey;
@property (nonatomic, readonly) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;

- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

@end
