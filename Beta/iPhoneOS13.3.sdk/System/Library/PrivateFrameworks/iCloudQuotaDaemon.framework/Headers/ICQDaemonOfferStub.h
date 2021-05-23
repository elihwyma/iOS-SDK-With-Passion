/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <Foundation/NSObject.h>

@class ICQDaemonOfferConditions, ICQDaemonOfferCriteria, NSDictionary, NSString;

@interface ICQDaemonOfferStub : NSObject

{
    NSDictionary *_serverDict;
    ICQDaemonOfferConditions *_conditionsWhenChosen;
}

@property (nonatomic, readonly) NSString *offerId;
@property (nonatomic, readonly, getter=isBuddyOffer) _Bool buddyOffer;
@property (nonatomic, readonly) ICQDaemonOfferCriteria *criteria;
@property (copy, nonatomic) ICQDaemonOfferConditions *conditionsWhenChosen;
@property (nonatomic, readonly) NSDictionary *serverDictionary;

- (id)initWithServerDictionary:(id)arg1;

@end
