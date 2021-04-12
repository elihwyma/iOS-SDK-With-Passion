//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFMessageTransferResult : NSObject
{
    NSUInteger _resultCode;
    NSArray *_failedMessages;
    NSArray *_transferedMessages;
}

@property(readonly, nonatomic) NSArray *transferedMessages; // @synthesize transferedMessages=_transferedMessages;
@property(readonly, nonatomic) NSArray *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(readonly, nonatomic) NSUInteger resultCode; // @synthesize resultCode=_resultCode;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithResultCode:(NSUInteger)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3;

@end

