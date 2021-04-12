//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class BSMachPortReceiveRight, NSString;

@interface SBSAssertion : NSObject <BSInvalidatable>
{
    NSString *_assertionName;
    NSString *_reason;
    BSMachPortReceiveRight *_receiveRight;
}

@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *assertionName; // @synthesize assertionName=_assertionName;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 receiveRight:(id)arg3;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;

@end

