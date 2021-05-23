/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol ICDocCamProcessingBlockerDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamProcessingBlocker : NSObject

{
    id <ICDocCamProcessingBlockerDelegate> _delegate;
    NSMutableSet *_blockerSet;
}

@property (weak, nonatomic) id <ICDocCamProcessingBlockerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *blockerSet;

- (id)initWithDelegate:(id)arg1;
- (_Bool)blocked;
- (void)addBlockerOfType:(id)arg1 clearRectangles:(_Bool)arg2 clearQueue:(_Bool)arg3;
- (void)removeBlockerOfType:(id)arg1;

@end
