/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _REActionInvocationData : NSObject

{
    _Bool _remote;
    NSDate *_date;
    unsigned long long _count;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) _Bool remote;
@property (nonatomic) unsigned long long count;

@end
