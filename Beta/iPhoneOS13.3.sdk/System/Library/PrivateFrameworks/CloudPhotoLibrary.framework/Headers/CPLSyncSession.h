/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSString;

@protocol CPLSyncSessionRescheduler;

@interface CPLSyncSession : NSObject

{
    NSDate *_expectedDate;
    unsigned long long _sequenceNumber;
    id <CPLSyncSessionRescheduler> _rescheduler;
}

@property (nonatomic, readonly) NSDate *expectedDate;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (nonatomic, readonly, getter=isDetached) _Bool detached;
@property (nonatomic, readonly) _Bool shouldDefer;
@property (nonatomic, readonly) _Bool mightNeedForegroundToStart;
@property (nonatomic, readonly) NSString *whenItWillStartDescription;
@property (retain, nonatomic) id <CPLSyncSessionRescheduler> rescheduler;

+ (id)detachedSyncSession;

- (id)description;
- (_Bool)isAfterDate:(id)arg1;
- (_Bool)isBeforeDate:(id)arg1;
- (id)initWithSequenceNumber:(unsigned long long)arg1 expectedDate:(id)arg2;
- (_Bool)isInMoreThanTimeInverval:(double)arg1;
- (_Bool)isInLessThanTimeInterval:(double)arg1;
- (void)dropExpectedDate;
- (void)deferWithBlock:(CDUnknownBlockType)arg1;
- (void)sessionIsDone;
- (void)sessionWontHappen;
- (void)engineIsClosing;

@end
