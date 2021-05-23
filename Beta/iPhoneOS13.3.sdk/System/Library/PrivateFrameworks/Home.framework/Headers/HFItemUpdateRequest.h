/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HFItemUpdateRequest : NSObject

{
    NSSet *_itemsToUpdate;
    NSSet *_itemsProvidersToReload;
    SEL _senderSelector;
}

@property (nonatomic, readonly) NSSet *itemsToUpdate;
@property (nonatomic, readonly) NSSet *itemsProvidersToReload;
@property (nonatomic, readonly) SEL senderSelector;

+ (id)requestToReloadItemProviders:(id)arg1 senderSelector:(SEL)arg2;
+ (id)requestToUpdateItems:(id)arg1 senderSelector:(SEL)arg2;

- (id)init;
- (id)initWithItemProviders:(id)arg1 items:(id)arg2 senderSelector:(SEL)arg3;

@end
