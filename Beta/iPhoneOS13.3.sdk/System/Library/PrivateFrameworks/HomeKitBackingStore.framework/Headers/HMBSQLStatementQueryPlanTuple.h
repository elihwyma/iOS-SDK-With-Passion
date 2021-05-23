/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject

{
    int _row;
    int _parent;
    NSString *_detail;
}

@property (nonatomic, readonly) int row;
@property (nonatomic, readonly) int parent;
@property (nonatomic, readonly) NSString *detail;

- (id)initWithRow:(id)arg1;

@end
