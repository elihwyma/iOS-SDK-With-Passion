/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSDateFormatter;

@interface SiriUICardLogger : NSObject

{
    NSDateFormatter *_dateFormatter;
}

+ (id)_sharedInstance;
+ (id)logCardData:(id)arg1 format:(unsigned long long)arg2;
+ (id)logCard:(id)arg1 format:(unsigned long long)arg2;
+ (id)logCardData:(id)arg1;
+ (id)logCard:(id)arg1;

- (id)init;
- (id)_dateFormatter;
- (id)_nowString;
- (id)_currentFilenameForFormat:(unsigned long long)arg1;

@end
