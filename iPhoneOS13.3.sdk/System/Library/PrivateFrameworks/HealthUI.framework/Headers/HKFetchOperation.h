//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol HKFetchOperationDelegate;

@interface HKFetchOperation : NSObject
{
    NSUUID *_UUID;
    long long _clientPriority;
    long long _operationPriority;
    id <HKFetchOperationDelegate> _delegate;
}

@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <HKFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long operationPriority; // @synthesize operationPriority=_operationPriority;
@property(nonatomic) long long clientPriority; // @synthesize clientPriority=_clientPriority;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (void)_alertDelegateDidUpdatePriority;
- (void)stopOperation;
- (void)startOperationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

