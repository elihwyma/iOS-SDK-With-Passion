/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RPSendEntry : NSObject

{
    unsigned int _xid;
    unsigned int _xpcID;
    CDUnknownBlockType _completion;
    NSData *_eventData;
    NSString *_eventID;
    NSDictionary *_options;
    unsigned long long _queueTicks;
    NSString *_requestID;
    NSDictionary *_request;
    CDUnknownBlockType _responseHandler;
    NSObject<OS_dispatch_source> *_timer;
    NSNumber *_xidObj;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) NSData *eventData;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long queueTicks;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned int xid;
@property (retain, nonatomic) NSNumber *xidObj;
@property (nonatomic) unsigned int xpcID;

@end
