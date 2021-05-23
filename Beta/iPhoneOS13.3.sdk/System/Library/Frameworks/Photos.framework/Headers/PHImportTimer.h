/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PHImportTimer : NSObject

{
    unsigned char _type;
    unsigned char _subtype;
    id _uuid;
    NSDate *_startTime;
    NSDate *_endTime;
    unsigned long long _signpostId;
}

@property (retain) id uuid;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property unsigned char type;
@property unsigned char subtype;
@property unsigned long long signpostId;

- (id)description;
- (void)stop;
- (void)start;
- (double)duration;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2;

@end
