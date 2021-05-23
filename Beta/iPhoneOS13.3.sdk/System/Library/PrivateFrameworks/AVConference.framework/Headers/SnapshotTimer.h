/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SnapshotTimer : NSObject

{
    _Bool taskIsComplete;
}

@property (nonatomic) _Bool taskIsComplete;

+ (void)takeSnapshotForTask:(id)arg1;

- (id)init;
- (void)checkout;
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;

@end
