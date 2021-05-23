/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest

{
    NSMutableDictionary *_parameters;
}

@property (copy, readonly) NSDictionary *parameters;
@property (nonatomic) id <SSItemLookupRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)_convertedValueForValue:(id)arg1;
- (id)_errorForStatusCode:(long long)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
- (void)startWithItemLookupBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)valueForParameter:(id)arg1;
- (id)copyQueryStringParameters;

@end
