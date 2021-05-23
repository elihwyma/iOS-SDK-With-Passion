/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface NPKPaymentWebServiceCompanionTargetDeviceOutstandingRequest : NSObject

{
    NSString *_messageIdentifier;
    id _completionHandler;
    CDUnknownBlockType _errorHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) id completionHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;

@end
