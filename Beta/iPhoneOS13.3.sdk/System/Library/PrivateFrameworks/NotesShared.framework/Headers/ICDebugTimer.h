/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface ICDebugTimer : NSObject

{
    double _elapsedTime;
    NSDate *_startingDate;
}

@property (retain) NSDate *startingDate;
@property double elapsedTime;

+ (id)debugTimerForClass:(Class)arg1;
+ (void)enableTimersForClass:(Class)arg1;

- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;

@end
