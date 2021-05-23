/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPNRReadersCache, NSString;

__attribute__((visibility("hidden")))
@interface GEOPhoneNumberResolverLocalProxy : NSObject

{
    GEOPNRReadersCache *_readersCache;
}

@property (retain, nonatomic, readonly) GEOPNRReadersCache *readersCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id *)arg3;
- (id)resolvedStringForCC:(id)arg1 inCountry:(id)arg2 locationIndex:(unsigned int)arg3 error:(id *)arg4;
- (id)resolveUnknownFormatPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id *)arg3;
- (void)resolvePhoneNumbers:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end
