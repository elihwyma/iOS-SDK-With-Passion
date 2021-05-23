/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSOperation.h>

@class ML3DatabaseConnection, NSArray;

@interface ML3ContainerItemDiffOperation : NSOperation

{
    long long _containerPersistentID;
    NSArray *_updatedItemsPersistentIDs;
    ML3DatabaseConnection *_connection;
    NSArray *_containerItemsToUpdate;
    NSArray *_containerItemsToDelete;
}

@property (retain, nonatomic) NSArray *containerItemsToUpdate;
@property (retain, nonatomic) NSArray *containerItemsToDelete;

- (void)main;
- (id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3;

@end
