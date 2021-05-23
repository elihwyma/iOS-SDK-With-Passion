/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject

{
    HKAuthorizationRequestRecord *_record;
    CDUnknownBlockType _requestSentHandler;
    CDUnknownBlockType _requestFinishedHandler;
}

@property (nonatomic, readonly) HKAuthorizationRequestRecord *record;
@property (copy, nonatomic, readonly) CDUnknownBlockType requestSentHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType requestFinishedHandler;

- (id)initWithRequestRecord:(id)arg1 requestSentHandler:(CDUnknownBlockType)arg2 requestFinishedHandler:(CDUnknownBlockType)arg3;

@end
