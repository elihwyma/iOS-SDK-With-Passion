/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class PETEventTracker2;

@interface WFEventTracker : NSObject

{
    PETEventTracker2 *_proactiveTracker;
}

@property (nonatomic, readonly) PETEventTracker2 *proactiveTracker;

+ (id)sharedTracker;

- (id)init;
- (void)trackEvent:(id)arg1;
- (id)initWithTracker:(id)arg1;
- (void)trackEvent:(id)arg1 count:(int)arg2;

@end
