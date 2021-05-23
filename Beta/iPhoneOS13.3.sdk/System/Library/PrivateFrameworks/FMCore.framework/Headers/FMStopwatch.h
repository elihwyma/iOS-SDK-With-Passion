/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FMStopwatch : NSObject

{
    NSString *_label;
    NSString *_comment;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

+ (void)initialize;
+ (void)dumpBuffer:(id)arg1;
+ (void)eventWithLabel:(id)arg1 comment:(id)arg2;
+ (id)illegalLabelCharacterSet;
+ (id)stopwatchWithLabel:(id)arg1;
+ (void)eventWithLabel:(id)arg1;

- (id)description;
- (void)stop;
- (id)initWithLabel:(id)arg1;
- (id)descriptionAsData;
- (void)stopWithComment:(id)arg1;

@end
