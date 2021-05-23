/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _mkMapServiceWalletMerchantTicket : NSObject

{
    id <GEOMapServiceTicket> _ticket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)submitWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
