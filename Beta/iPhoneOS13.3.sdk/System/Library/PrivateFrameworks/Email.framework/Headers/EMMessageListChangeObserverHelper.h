/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMCollection;

@interface EMMessageListChangeObserverHelper : NSObject

{
    EMCollection *_collection;
}

@property (weak, nonatomic) EMCollection *collection;

- (id)initWithCollection:(id)arg1;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (void)notifyChangeObserverAboutChangedItemIDs:(id)arg1 itemIDsWithCountChanges:(id)arg2;

@end
