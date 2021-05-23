/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

@protocol NADeallocationTracerDelegate;

__attribute__((visibility("hidden")))
@interface NADeallocationTracer : NSObject

{
    id <NADeallocationTracerDelegate> _delegate;
}

@property (nonatomic) id <NADeallocationTracerDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
