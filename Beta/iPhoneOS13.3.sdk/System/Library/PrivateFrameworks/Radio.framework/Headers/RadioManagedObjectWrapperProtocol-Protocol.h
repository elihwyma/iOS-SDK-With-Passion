/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Radio/Swift-Protocol.h>

@class MISSING_TYPE, NSManagedObject, RadioModel;

@protocol RadioManagedObjectWrapperProtocol <Swift>

@property (nonatomic, readonly, getter=isDatabaseBacked) _Bool databaseBacked;
@property (nonatomic, readonly) NSManagedObject *managedObject;
@property (nonatomic, readonly) RadioModel *model;

- (MISSING_TYPE *)initWithModel:managedObject: /* Error: Ran out of types for this method. */;

@end
