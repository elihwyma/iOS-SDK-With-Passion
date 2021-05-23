/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class TSPObjectContext;

@protocol TSPObjectDelegate <Swift>

@property (nonatomic, readonly) TSPObjectContext *context;

- (unsigned short)modifyObjectTokenForNewObject;
- (unsigned short)newObjectIdentifier;

@end
