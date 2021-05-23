/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject

{
    CUTWeakReference *_contextWeakReference;
    NSDate *_firstOccurrence;
    unsigned long long _count;
}

@property (weak, nonatomic) id context;
@property (readonly) NSDate *firstOccurrence;
@property (nonatomic) unsigned long long count;

- (id)init;
- (_Bool)shouldJettison:(id *)arg1;

@end
