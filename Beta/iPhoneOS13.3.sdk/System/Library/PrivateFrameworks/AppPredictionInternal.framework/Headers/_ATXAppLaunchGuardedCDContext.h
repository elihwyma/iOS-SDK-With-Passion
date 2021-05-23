/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol _CDLocalContext;

@interface _ATXAppLaunchGuardedCDContext : NSObject

{
    id <_CDLocalContext> _context;
    NSMutableSet *_registrations;
}

@end
