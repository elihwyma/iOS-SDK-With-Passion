//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBFCancelable;

@protocol SBFScheduler <NSObject>
- (id <SBFCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <SBFCancelable>)performCancelableBlock:(void (^)(SBFCancelationToken *))arg1;
- (id <SBFCancelable>)performBlock:(void (^)(void))arg1;
@end

