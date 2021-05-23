/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface DurationGroup : NSObject

{
    _Bool _wasChanged;
    unsigned long long _groupId;
    NSDate *_start;
    NSDate *_end;
}

@property (readonly) unsigned long long groupId;
@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property _Bool wasChanged;

- (id)description;
- (id)initWithStart:(id)arg1 end:(id)arg2;

@end
