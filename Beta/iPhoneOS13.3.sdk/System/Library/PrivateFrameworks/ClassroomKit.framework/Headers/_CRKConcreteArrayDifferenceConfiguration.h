/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CRKConcreteArrayDifferenceConfiguration : NSObject

{
    CDUnknownBlockType _publishedItemsComparator;
    CDUnknownBlockType _incomingItemsIdentifierFunction;
    CDUnknownBlockType _publishedItemsIdentifierFunction;
    CDUnknownBlockType _liftingFunction;
    CDUnknownBlockType _updateBlock;
}

@property (copy, nonatomic) CDUnknownBlockType incomingItemsIdentifierFunction;
@property (copy, nonatomic) CDUnknownBlockType publishedItemsIdentifierFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType publishedItemsComparator;
@property (copy, nonatomic) CDUnknownBlockType liftingFunction;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;

@end
