//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RPSendEntry : NSObject
{
    unsigned int _xid;
    unsigned int _xpcID;
    id /* CDUnknownBlockType */ _completion;
    NSData *_eventData;
    NSString *_eventID;
    NSDictionary *_options;
    NSUInteger _queueTicks;
    NSString *_requestID;
    NSDictionary *_request;
    id /* CDUnknownBlockType */ _responseHandler;
    NSObject<OS_dispatch_source> *_timer;
    NSNumber *_xidObj;
}

@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(retain, nonatomic) NSNumber *xidObj; // @synthesize xidObj=_xidObj;
@property(nonatomic) unsigned int xid; // @synthesize xid=_xid;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) NSUInteger queueTicks; // @synthesize queueTicks=_queueTicks;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
// - (void).cxx_destruct;

@end

