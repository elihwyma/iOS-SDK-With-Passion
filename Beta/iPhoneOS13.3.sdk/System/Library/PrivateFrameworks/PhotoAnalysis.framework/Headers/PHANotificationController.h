/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class PGManager;

@interface PHANotificationController : NSObject

{
    PGManager *_graphManager;
}

- (id)initWithGraphManager:(id)arg1;
- (_Bool)userIsActivelyUsingPhotos;
- (id)bestDateForDeliveringNotification;
- (_Bool)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)fireNotificationForSuggestionIdentifiers:(id)arg1;
- (void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2;

@end
