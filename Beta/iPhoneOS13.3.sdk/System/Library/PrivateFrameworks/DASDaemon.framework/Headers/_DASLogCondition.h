/*
 Image: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
 */

#import <Foundation/NSObject.h>

@interface _DASLogCondition : NSObject

{
    _Bool _isIdeal;
    NSObject *_condition;
}

@property (retain, nonatomic) NSObject *condition;
@property (nonatomic) _Bool isIdeal;

+ (id)withCondition:(id)arg1;

- (id)description;

@end
