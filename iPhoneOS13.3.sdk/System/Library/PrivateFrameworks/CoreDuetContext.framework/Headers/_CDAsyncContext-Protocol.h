//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuetContext/_CDContext-Protocol.h>

@class NSObject, _CDContextualKeyPath;
@protocol OS_dispatch_queue;

@protocol _CDAsyncContext <_CDContext>
- (void)lastModifiedDateForContextualKeyPath:(_CDContextualKeyPath *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSDate *))arg3;
- (void)objectForContextualKeyPath:(_CDContextualKeyPath *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSObject<NSCopying><NSSecureCoding> *))arg3;
@end

