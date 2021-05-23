/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <Foundation/NSObject.h>

@interface MSDLogModel : NSObject

{
    struct __sFILE *_logFP;
}

@property struct __sFILE *logFP;

+ (id)sharedInstance;

- (void)logMessage:(id)arg1;
- (void)logWithFormat:(id)arg1 andArgs:(char *)arg2;
- (id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2;
- (_Bool)enableLogToFile:(id)arg1;
- (_Bool)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3;

@end
