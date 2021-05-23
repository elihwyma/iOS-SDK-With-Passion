/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : NSObject

{
    id <OCDDelayedNodeContext> mDelayedContext;
    _Bool mLoaded;
}

- (_Bool)load;
- (_Bool)isLoaded;
- (void)setLoaded:(_Bool)arg1;
- (void)setDelayedContext:(id)arg1;
- (id)delayedContext;

@end
