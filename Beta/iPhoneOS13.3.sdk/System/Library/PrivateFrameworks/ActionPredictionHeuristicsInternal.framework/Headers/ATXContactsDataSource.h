/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)contactsWithIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithEmail:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithPhone:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_contactsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
