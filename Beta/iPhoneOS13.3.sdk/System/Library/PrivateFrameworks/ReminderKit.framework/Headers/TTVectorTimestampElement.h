/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@interface TTVectorTimestampElement : NSObject

{
    unsigned long long _clock;
    unsigned long long _subclock;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

@end
