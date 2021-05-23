/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SizeContext : NSObject

{
    NSMutableArray *_windowContextStack;
}

+ (id)sharedInstance;

- (id)init;
- (void)pushContextWithWindow:(id)arg1;
- (void)popContextFromWindow:(id)arg1;
- (id)windowForCurrentContext;
- (_Bool)hasWindowForCurrentContext;

@end
