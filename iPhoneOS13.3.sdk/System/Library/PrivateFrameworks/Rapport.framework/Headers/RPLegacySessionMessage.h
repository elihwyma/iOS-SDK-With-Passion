//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RPLegacySessionMessage : NSObject
{
    NSDictionary *_message;
    NSDictionary *_options;
    NSString *_requestID;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
// - (void).cxx_destruct;

@end

