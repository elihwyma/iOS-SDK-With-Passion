//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKPushMessage, NSData, NSDictionary, NSString;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding>
{
    NSString *_serverInfo;
    NSData *_clientInfo;
    long long _clientErrorCode;
    NSString *_altDSID;
    NSString *_transactionId;
    AKPushMessage *_responseMessage;
    NSDictionary *_responseInfo;
    NSUInteger _circleStep;
}

+ (BOOL)supportsSecureCoding;
+ (id)payloadWithMessage:(id)arg1;
@property(nonatomic) NSUInteger circleStep; // @synthesize circleStep=_circleStep;
@property(retain, nonatomic) NSDictionary *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(retain, nonatomic) AKPushMessage *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) long long clientErrorCode; // @synthesize clientErrorCode=_clientErrorCode;
@property(retain, nonatomic) NSData *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *serverInfo; // @synthesize serverInfo=_serverInfo;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)replyPayload;
- (BOOL)isAcceptingPayload;
- (BOOL)isRequestingPayload;

@end

