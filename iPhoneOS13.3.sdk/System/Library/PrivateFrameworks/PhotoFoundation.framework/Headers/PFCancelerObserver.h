//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFCancelerObserver-Protocol.h>

@interface PFCancelerObserver : NSObject <PFCancelerObserver>
{
    id /* CDUnknownBlockType */ _block;
}

+ (id)observerForCanceler:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
// - (void).cxx_destruct;
- (void)cancelerWasCanceled:(id)arg1;
- (id)initWithCanceler:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

