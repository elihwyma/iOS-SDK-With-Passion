/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SSPersonalizeOffersResponse : NSObject

{
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

@property (nonatomic, readonly) NSArray *personalizedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)actionParametersForItemIdentifier:(id)arg1;
- (id)priceDisplayForItemType:(id)arg1;
- (id)actionDisplayNameForItemType:(id)arg1;
- (void)_setPersonalizedItems:(id)arg1;
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;
- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;

@end
