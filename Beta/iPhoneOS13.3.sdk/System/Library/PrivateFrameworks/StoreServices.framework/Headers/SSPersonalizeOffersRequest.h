/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSString;

@protocol SSPersonalizeOffersDelegate;

@interface SSPersonalizeOffersRequest : SSRequest

{
    NSArray *_items;
}

@property (nonatomic) id <SSPersonalizeOffersDelegate> delegate;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)start;
- (id)initWithItems:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithPersonalizedResponseBlock:(CDUnknownBlockType)arg1;

@end
