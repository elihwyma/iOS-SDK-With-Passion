/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSISEngine, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject

{
    struct CGPoint _cachedOrigin;
    UIView *_delegate;
    NSISEngine *_cacheEngine;
    unsigned long long _variableChangeCount;
}

@property (weak, nonatomic) NSISEngine *cacheEngine;
@property (nonatomic) unsigned long long variableChangeCount;
@property (nonatomic, readonly) struct CGPoint origin;
@property (nonatomic, readonly) _Bool isValid;
@property (weak, nonatomic, readonly) UIView *delegate;

- (id)initWithDelegate:(id)arg1;

@end
