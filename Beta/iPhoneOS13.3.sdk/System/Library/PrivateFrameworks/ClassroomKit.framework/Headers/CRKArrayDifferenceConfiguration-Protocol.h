/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKArrayDifferenceConfiguration <Swift>

@property (copy, nonatomic) CDUnknownBlockType publishedItemsComparator;
@property (copy, nonatomic, readonly) CDUnknownBlockType incomingItemsIdentifierFunction;
@property (copy, nonatomic, readonly) CDUnknownBlockType publishedItemsIdentifierFunction;
@property (copy, nonatomic) CDUnknownBlockType liftingFunction;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;

@end
