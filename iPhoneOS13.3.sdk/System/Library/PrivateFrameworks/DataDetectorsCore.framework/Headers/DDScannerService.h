//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DDScannerService : NSObject
{
}

+ (void)cancelJob:(long long)arg1;
+ (long long)scanString:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
+ (long long)scanQuery:(struct __DDScanQuery )arg1 configuration:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
+ (long long)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
+ (id)scanString:(id)arg1;
+ (id)scanQuery:(struct __DDScanQuery )arg1 configuration:(id)arg2;
+ (id)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3;
+ (void)appendWatchOSLinksToString:(id)arg1;

@end
