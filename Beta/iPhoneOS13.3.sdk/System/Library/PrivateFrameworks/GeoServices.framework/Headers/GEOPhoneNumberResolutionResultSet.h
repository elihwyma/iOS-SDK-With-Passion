/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject

{
    NSMutableDictionary *_results;
}

- (id)init;
- (id)description;
- (id)initWithXPCDictionaryRepresentation:(id)arg1;
- (id)xpcDictionaryRepresentation;
- (void)setResult:(id)arg1 forPhoneNumber:(id)arg2;
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;
- (void)enumerateResolutionsUsingBlock:(CDUnknownBlockType)arg1;

@end
