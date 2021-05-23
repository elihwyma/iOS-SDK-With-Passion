/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKGreenTeaDataUsageResolver : NSObject

{
    _Bool _currentlyResolving;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) _Bool currentlyResolving;

+ (void)resolveGreenTeaDataUsageIfNecessary;

- (id)init;
- (void)resolveGreenTeaDataUsageIfNecessary;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;

@end
