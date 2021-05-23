/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, _DKEvent;

@interface _DKEventDateRef : NSObject

{
    NSDate *_date;
    unsigned long long _type;
    _DKEvent *_event;
}

@property (retain) NSDate *date;
@property unsigned long long type;
@property (retain) _DKEvent *event;

- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2 event:(id)arg3;

@end
