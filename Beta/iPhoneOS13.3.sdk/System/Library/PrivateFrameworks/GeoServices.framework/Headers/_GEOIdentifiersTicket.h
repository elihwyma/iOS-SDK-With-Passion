/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket

{
    NSArray *_identifiers;
    int _resultProviderID;
    NSString *_contentProvider;
    unsigned long long _options;
}

- (id)description;
- (id)initWithTraits:(id)arg1;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;

@end
