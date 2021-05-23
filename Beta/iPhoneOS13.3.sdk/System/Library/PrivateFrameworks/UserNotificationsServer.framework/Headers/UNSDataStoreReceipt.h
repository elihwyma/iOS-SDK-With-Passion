/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSArray;

@interface UNSDataStoreReceipt : NSObject

{
    NSArray *_addedObjects;
    NSArray *_replacedObjects;
    NSArray *_replacementObjects;
    NSArray *_removedObjects;
}

@property (nonatomic, readonly) NSArray *addedObjects;
@property (nonatomic, readonly) NSArray *replacedObjects;
@property (nonatomic, readonly) NSArray *replacementObjects;
@property (nonatomic, readonly) NSArray *removedObjects;

+ (id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4;

- (_Bool)hasChanges;
- (id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4;

@end
