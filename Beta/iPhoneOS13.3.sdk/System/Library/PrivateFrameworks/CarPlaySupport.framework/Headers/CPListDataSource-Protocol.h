/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/Swift-Protocol.h>

@class NSArray;

@protocol CPListDataSource <Swift>

@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSArray *items;

- (unsigned short)numberOfItemsInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)itemAtIndexPath: /* Error: Ran out of types for this method. */;

@end
