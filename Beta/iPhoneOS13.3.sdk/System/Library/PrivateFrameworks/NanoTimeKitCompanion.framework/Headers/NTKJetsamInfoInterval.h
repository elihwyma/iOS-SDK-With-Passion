/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NTKJetsamInfoFetcher;

@interface NTKJetsamInfoInterval : NSObject

{
    NSString *_label;
    NTKJetsamInfoFetcher *_fetcher;
    struct jetsam_info _startInfo;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) struct jetsam_info startInfo;
@property (nonatomic, readonly) struct jetsam_info currentInfo;

- (void)reset;
- (id)initWithLabel:(id)arg1;
- (_Bool)waitUntilDirtyMemoryDrained;
- (void)logCurrentInterval;
- (_Bool)waitUntilDirtyMemoryReaches:(long long)arg1 maxWaitMS:(int)arg2;

@end
