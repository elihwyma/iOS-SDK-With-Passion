/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TSULogHelper : NSObject

{
    unsigned long long _throttleCount;
    NSDate *_lastThrottleCheck;
}

@property unsigned long long throttleCount;
@property (retain) NSDate *lastThrottleCheck;

+ (id)sharedInstance;

- (_Bool)incrementThrottleCountAndCheckThottleMax:(unsigned long long)arg1;

@end
