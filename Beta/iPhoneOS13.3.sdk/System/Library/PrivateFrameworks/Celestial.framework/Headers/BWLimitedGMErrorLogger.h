/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWLimitedGMErrorLogger : NSObject

{
    int _maxLoggingCount;
    int _currentLoggingCount;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int maxLoggingCount;
@property (nonatomic, readonly) int currentLoggingCount;

- (void)dealloc;
- (id)initWithName:(id)arg1 maxLoggingCount:(int)arg2;
- (void)logErrorNumber:(int)arg1 errorString:(id)arg2;
- (void)resetCurrentLoggingCounter;

@end
