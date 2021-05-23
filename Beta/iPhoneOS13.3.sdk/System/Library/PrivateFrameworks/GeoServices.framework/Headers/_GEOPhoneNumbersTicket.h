/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket

{
    NSArray *_phoneNumbers;
    _Bool _allowCellularDataForLookup;
}

- (id)description;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3;

@end
