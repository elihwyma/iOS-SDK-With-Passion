/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSOperation.h>

@class NSDate, NSError;

@interface WFOperation : NSOperation

{
    _Bool _finished;
    NSDate *_start;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error;

- (id)name;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isReady;
- (void)finish;

@end
