//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SASProximitySessionTransport : NSObject
{
    id /* CDUnknownBlockType */ _receivedDataBlock;
}

@property(copy) id /* CDUnknownBlockType */ receivedDataBlock; // @synthesize receivedDataBlock=_receivedDataBlock;
// - (void).cxx_destruct;
- (void)sendData:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (void)activate;

@end

