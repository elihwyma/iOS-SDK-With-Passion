//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/NFStateMachineContextType-Protocol.h>

@class NSError;

@interface SVVideoLoadingStateObserverStateContext : NSObject <NFStateMachineContextType>
{
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)initWithError:(id)arg1;

@end

