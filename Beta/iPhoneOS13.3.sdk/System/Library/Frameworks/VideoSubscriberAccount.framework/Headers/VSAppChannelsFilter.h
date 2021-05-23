/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface VSAppChannelsFilter : NSObject

{
    NSSet *_personalChannelIDs;
    NSArray *_allChannelMappings;
    NSSet *_personalAppAdamIDs;
    NSSet *_genericAppAdamIDs;
}

@property (copy, nonatomic) NSSet *genericAppAdamIDs;
@property (copy, nonatomic) NSSet *personalAppAdamIDs;
@property (copy, nonatomic) NSSet *personalChannelIDs;
@property (copy, nonatomic) NSArray *allChannelMappings;

- (id)init;
- (void)_updateAdamIDs;

@end
