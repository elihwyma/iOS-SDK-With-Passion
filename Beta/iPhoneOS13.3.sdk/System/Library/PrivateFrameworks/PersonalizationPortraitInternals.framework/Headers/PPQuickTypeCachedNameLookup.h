/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_semaphore;

@interface PPQuickTypeCachedNameLookup : NSObject

{
    NSObject<OS_dispatch_semaphore> *_sem;
    NSArray *_candidates;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSArray *candidates;

@end
