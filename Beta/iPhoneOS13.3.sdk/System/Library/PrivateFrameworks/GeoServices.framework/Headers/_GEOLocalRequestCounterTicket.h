/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEORequestCounterPersistence, NSString;

@protocol OS_nw_activity;

__attribute__((visibility("hidden")))
@interface _GEOLocalRequestCounterTicket : NSObject

{
    long long _subTaskXmitBytes;
    long long _subTaskRecvBytes;
    NSString *_appId;
    NSString *_requestId;
    GEORequestCounterPersistence *_persistence;
    NSObject<OS_nw_activity> *_nwActivity;
    _GEOLocalRequestCounterTicket *_parentTask;
    _Bool _logNetworkActivityOnly;
    _Bool _complete;
    unsigned char _type;
    unsigned char _subtasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
+ (id)_requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 withParent:(id)arg3 logNetworkActivityOnly:(_Bool)arg4;
+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 persistence:(id)arg3;

- (id)createSubtask:(_Bool)arg1;
- (void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3;
- (void)_subTask:(id)arg1 completedWithResult:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4;
- (void)startingRequestWithTask:(id)arg1;

@end
