/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@interface DDScannerService : NSObject

+ (id)scanString:(id)arg1;
+ (long long)scanString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)cancelJob:(long long)arg1;
+ (id)scanString:(id)arg1 range:(struct _NSRange)arg2 configuration:(id)arg3;
+ (void)appendWatchOSLinksToString:(id)arg1;
+ (id)scanQuery:(struct __DDScanQuery *)arg1 configuration:(id)arg2;
+ (long long)scanString:(id)arg1 range:(struct _NSRange)arg2 configuration:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (long long)scanQuery:(struct __DDScanQuery *)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
