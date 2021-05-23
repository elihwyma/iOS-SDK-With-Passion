/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface VCPProcessingStatusEntry : NSObject

{
    unsigned long long _taskID;
    NSString *_localIdentifier;
    unsigned long long _status;
    unsigned long long _attempts;
    NSDate *_nextRetryDate;
}

@property (nonatomic, readonly) unsigned long long taskID;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) unsigned long long attempts;
@property (nonatomic, readonly) NSDate *nextRetryDate;

+ (id)entryWithLocalIdentifier:(id)arg1 andTaskID:(unsigned long long)arg2 andStatus:(unsigned long long)arg3 andAttempts:(unsigned long long)arg4 andNextRetryDate:(id)arg5;

- (id)initWithLocalIdentifier:(id)arg1 andTaskID:(unsigned long long)arg2 andStatus:(unsigned long long)arg3 andAttempts:(unsigned long long)arg4 andNextRetryDate:(id)arg5;

@end
