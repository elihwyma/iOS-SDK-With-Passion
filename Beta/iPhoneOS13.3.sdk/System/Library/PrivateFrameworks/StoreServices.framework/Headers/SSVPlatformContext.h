/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol SSVSAPContext;

@interface SSVPlatformContext : NSObject

{
    NSString *_lookupURLString;
    id <SSVSAPContext> _sapContext;
    NSArray *_signedHeaders;
    NSArray *_signedQueryParameters;
    NSString *_unpersonalizedLookupURLString;
}

@property (nonatomic, readonly) NSDictionary *bagDictionary;
@property (nonatomic, readonly) NSString *lookupURLString;
@property (nonatomic, readonly) NSString *unpersonalizedLookupURLString;
@property (nonatomic, readonly) NSArray *signedHeaders;
@property (nonatomic, readonly) NSArray *signedQueryParameters;
@property (retain, nonatomic) id <SSVSAPContext> SAPContext;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLookupURL:(id)arg1 unpersonalizedLookupURL:(id)arg2 signedHeaders:(id)arg3 signedQueryParameters:(id)arg4;
- (id)initWithBagDictionary:(id)arg1;

@end
