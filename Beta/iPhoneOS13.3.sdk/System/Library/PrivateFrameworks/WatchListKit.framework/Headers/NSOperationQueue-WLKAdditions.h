/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (WLKAdditions)

+ (id)wlkDefaultQueue;
+ (id)wlkDefaultConcurrentQueue;

@end
