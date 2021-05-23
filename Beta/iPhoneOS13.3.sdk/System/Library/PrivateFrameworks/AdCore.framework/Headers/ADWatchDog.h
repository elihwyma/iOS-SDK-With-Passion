/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ADWatchDog : NSObject

{
    NSString *_reason;
    unsigned long long _delayTime;
}

@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long delayTime;

- (id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2;
- (void)updateReason:(id)arg1;

@end
