/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HUApplier : NSObject

{
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
    unsigned long long _state;
    double _progress;
}

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;

+ (void)registerStandaloneApplier:(id)arg1;
+ (void)unregisterStandaloneApplier:(id)arg1;

- (id)init;
- (_Bool)cancel;
- (_Bool)start;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateProgress:(double)arg1;
- (_Bool)complete:(_Bool)arg1;
- (_Bool)_hasCompleted;
- (void)addApplierBlock:(CDUnknownBlockType)arg1;

@end
