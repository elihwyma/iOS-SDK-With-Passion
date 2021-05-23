/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

@interface FlexCloudFetchOptions : NSObject

{
    _Bool _localOnly;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
}

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) _Bool localOnly;

@end
