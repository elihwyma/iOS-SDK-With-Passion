/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification

{
    _Bool _shouldReload;
    NSSet *_insertedEntries;
    NSSet *_updatedEntries;
    NSSet *_deletedEntries;
}

@property (nonatomic) _Bool shouldReload;
@property (copy, nonatomic) NSSet *insertedEntries;
@property (copy, nonatomic) NSSet *updatedEntries;
@property (copy, nonatomic) NSSet *deletedEntries;

+ (id)notificationWithFullReload;
+ (id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;

- (id)name;
- (id)object;
- (id)userInfo;
- (id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;
- (id)_initWithFullReload;

@end
