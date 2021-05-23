/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICMediaTime : NSObject

{
    unsigned char _days;
    unsigned char _hours;
    unsigned char _minutes;
    unsigned char _seconds;
    _Bool _negative;
}

@property (nonatomic) unsigned char days;
@property (nonatomic) unsigned char hours;
@property (nonatomic) unsigned char minutes;
@property (nonatomic) unsigned char seconds;
@property (nonatomic, getter=isNegative) _Bool negative;
@property (nonatomic, readonly) _Bool isZero;
@property (nonatomic, readonly) NSString *durationDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToMediaTime:(id)arg1;
- (id)initWithCMTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithSeconds:(double)arg1;

@end
