/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSProgress.h>

@class NSMutableArray;

@interface FPAggregateProgress : NSProgress

{
    NSMutableArray *_childProgresses;
}

- (void)addChild:(id)arg1;
- (void)cancel;
- (void)startReportingProgress;

@end
