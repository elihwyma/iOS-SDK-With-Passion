/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

@interface FMFetchOptions : NSObject

{
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
}

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;

- (id)init;

@end
