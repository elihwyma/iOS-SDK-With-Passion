//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (NAErrors)
+ (id)na_genericError;
+ (id)na_cancelledError;
+ (id)na_timeoutError;
+ (id)na_errorWithCode:(NSUInteger)arg1;
- (BOOL)na_isCancelledError;
- (BOOL)na_isTimeoutError;
@end

