//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUAssertion-Protocol.h>

@protocol OS_dispatch_queue;

@interface _BUCountingAssertion : NSObject <BUAssertion>
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _block;
}

// - (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;

@end
