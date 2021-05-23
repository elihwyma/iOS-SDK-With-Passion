/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCIDRSchedulerItem : NSObject

{
    unsigned int _framePosition;
    unsigned int _budgetInCaptureFrames;
    unsigned int _weightFactor;
    NSMutableArray *_streams;
}

@property (nonatomic) unsigned int framePosition;
@property (nonatomic) unsigned int weightFactor;
@property (nonatomic) unsigned int budgetInCaptureFrames;
@property (nonatomic, readonly) NSArray *streams;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addStream:(id)arg1;
- (long long)compareBudget:(id)arg1;

@end
