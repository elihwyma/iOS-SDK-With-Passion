/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <Foundation/NSObject.h>

@class NSDictionary, _ICQAlertSpecification, _ICQPageSpecification;

@interface _ICQFlowSpecification : NSObject

{
    _ICQPageSpecification *_startPage;
    NSDictionary *_pagesByIdentifier;
    _ICQAlertSpecification *_startAlert;
}

@property (nonatomic, readonly) _ICQPageSpecification *startPage;
@property (nonatomic, readonly) NSDictionary *pagesByIdentifier;
@property (retain, nonatomic) _ICQAlertSpecification *startAlert;

- (id)initWithPages:(id)arg1;

@end
