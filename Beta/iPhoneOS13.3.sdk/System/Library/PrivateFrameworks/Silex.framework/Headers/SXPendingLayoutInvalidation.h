/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NFPendingPromise, SXLayoutOptions;

@protocol SXComponent;

@interface SXPendingLayoutInvalidation : NSObject

{
    id <SXComponent> _component;
    NFPendingPromise *_pendingPromise;
    SXLayoutOptions *_layoutOptions;
    struct CGSize _suggestedSize;
}

@property (nonatomic, readonly) id <SXComponent> component;
@property (nonatomic, readonly) struct CGSize suggestedSize;
@property (nonatomic, readonly) NFPendingPromise *pendingPromise;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;

- (id)initWithComponent:(id)arg1 suggestedSize:(struct CGSize)arg2 pendingPromise:(id)arg3 layoutOptions:(id)arg4;

@end
