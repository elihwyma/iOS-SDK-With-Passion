/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SVVisibilityMonitor;

@interface SXVideoPlayerVisibilityMonitor : NSObject

{
    SVVisibilityMonitor *_visibilityMonitor;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
}

@property (nonatomic, readonly) NSMutableArray *willAppearBlocks;
@property (nonatomic, readonly) NSMutableArray *didAppearBlocks;
@property (nonatomic, readonly) NSMutableArray *visiblePercentageBlocks;
@property (nonatomic, readonly) NSMutableArray *willDisappearBlocks;
@property (nonatomic, readonly) NSMutableArray *didDisappearBlocks;
@property (retain, nonatomic) SVVisibilityMonitor *visibilityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) _Bool appeared;
@property (nonatomic, readonly) double visiblePercentage;
@property (weak, nonatomic, readonly) id object;

- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;
- (void)configureVisibilityMonitor:(id)arg1;
- (id)initWithVisibilityMonitor:(id)arg1;

@end
