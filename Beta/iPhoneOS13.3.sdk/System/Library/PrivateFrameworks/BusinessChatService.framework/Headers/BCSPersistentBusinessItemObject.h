/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class BCSBusinessItem, NSDate;

@interface BCSPersistentBusinessItemObject : NSObject

{
    BCSBusinessItem *_businessItem;
    NSDate *_TTLDate;
    NSDate *_lastRetrievedDate;
}

@property (nonatomic, readonly) BCSBusinessItem *businessItem;
@property (nonatomic, readonly) NSDate *TTLDate;
@property (nonatomic, readonly) NSDate *lastRetrievedDate;

- (id)initWithBusinessItem:(id)arg1 lastRetrievedDate:(id)arg2 TTLDate:(id)arg3;

@end
