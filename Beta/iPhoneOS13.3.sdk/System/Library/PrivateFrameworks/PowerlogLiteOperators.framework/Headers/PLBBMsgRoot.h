/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, PLAgent;

@interface PLBBMsgRoot : NSObject

{
    NSString *_msgName;
    NSNumber *_msgType;
    NSString *_msgPayload;
    NSString *_msgProcErr;
    NSDate *_msgDate;
    NSDictionary *_msgEntry;
    NSDictionary *_msgKVPairs;
    PLAgent *_agent;
}

@property (retain, nonatomic) NSString *msgName;
@property (retain, nonatomic) NSNumber *msgType;
@property (retain, nonatomic) NSString *msgPayload;
@property (retain, nonatomic) NSString *msgProcErr;
@property (retain, nonatomic) NSDate *msgDate;
@property (retain, nonatomic) NSDictionary *msgEntry;
@property (retain, nonatomic) NSDictionary *msgKVPairs;
@property (retain, nonatomic) PLAgent *agent;

- (id)init;
- (void)sendAndLogPLEntry:(id)arg1 andOverride:(id)arg2;
- (void)appendToMsgProcError:(id)arg1;

@end
