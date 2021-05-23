/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRMangledID;

__attribute__((visibility("hidden")))
@interface BRCSyncOperationThrottle : NSObject <Swift>

{
    _Bool _isSyncDown;
    int _lastErrorKind;
    double _delay;
    double _nextTry;
    BRMangledID *_mangledID;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double nextTry;
@property (nonatomic, readonly) int lastErrorKind;
@property (retain, nonatomic) BRMangledID *mangledID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMangledID:(id)arg1 isSyncDown:(_Bool)arg2;
- (void)updateAfterSchedulingTask;
- (void)updateForError:(id)arg1;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1;
- (_Bool)updateForClearingOutOfQuota;

@end
