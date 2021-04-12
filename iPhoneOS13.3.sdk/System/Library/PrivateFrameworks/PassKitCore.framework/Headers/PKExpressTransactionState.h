//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding>
{
    BOOL _processing;
    long long _technologyType;
    NSString *_paymentApplicationIdentifier;
    NSString *_passUniqueIdentifier;
    NSUInteger _receivedEvents;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger receivedEvents; // @synthesize receivedEvents=_receivedEvents;
@property(nonatomic, getter=isProcessing) BOOL processing; // @synthesize processing=_processing;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(copy, nonatomic) NSString *paymentApplicationIdentifier; // @synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

