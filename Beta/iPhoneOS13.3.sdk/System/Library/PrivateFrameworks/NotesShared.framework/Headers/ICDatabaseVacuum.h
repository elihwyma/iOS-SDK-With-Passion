/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol OS_dispatch_queue;

@interface ICDatabaseVacuum : NSObject

{
    CDUnknownBlockType _preVacuumHandler;
    CDUnknownBlockType _postVacuumHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

@property (copy, nonatomic) CDUnknownBlockType preVacuumHandler;
@property (copy, nonatomic) CDUnknownBlockType postVacuumHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSTimer *timer;

+ (id)activeVacuumQueue;
+ (id)activeVacuum;
+ (void)setActiveVacuum:(id)arg1;
+ (void)startDatabaseVacuumPolicy;
+ (void)startDatabaseVacuumPolicyWithPreVacuumHandler:(CDUnknownBlockType)arg1 postVacuumHandler:(CDUnknownBlockType)arg2;
+ (id)lastVacuumDate;
+ (void)setLastVacuumDate:(id)arg1;

- (id)init;
- (void)vacuum;
- (void)timerFired:(id)arg1;
- (void)startDatabaseVacuumPolicy;
- (void)vacuumHTMLDatabase;
- (void)stopDatabaseVacuumPolicy;

@end
