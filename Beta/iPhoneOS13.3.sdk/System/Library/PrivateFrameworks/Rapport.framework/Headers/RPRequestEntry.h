/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RPRequestEntry : NSObject

{
    unsigned int _xpcID;
    NSDictionary *_options;
    NSString *_requestID;
    CDUnknownBlockType _responseHandler;
    unsigned long long _sendTicks;
    NSObject<OS_dispatch_source> *_timer;
}

@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (nonatomic) unsigned long long sendTicks;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned int xpcID;

@end
