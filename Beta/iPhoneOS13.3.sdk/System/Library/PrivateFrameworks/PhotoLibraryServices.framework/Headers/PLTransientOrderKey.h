/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject

{
    long long _orderValue;
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
}

@property (retain, nonatomic) NSManagedObjectContext *moc;
@property (nonatomic) long long orderValue;
@property (retain, nonatomic) NSManagedObjectID *objectID;

- (id)description;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;

@end
