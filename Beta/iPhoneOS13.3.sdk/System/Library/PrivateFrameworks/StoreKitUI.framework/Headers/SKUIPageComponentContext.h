/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface SKUIPageComponentContext : NSObject <Swift>

{
    NSDictionary *_componentDictionary;
    NSArray *_ineligibleGratisIdentifiers;
    NSDictionary *_items;
    long long _layoutStyle;
    double _pageGenerationTime;
    NSDictionary *_platformKeyProfileOverrides;
    NSMutableSet *_unavailableItems;
}

@property (copy, nonatomic) NSDictionary *componentDictionary;
@property (copy, nonatomic) NSDictionary *items;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) double pageGenerationTime;
@property (copy, nonatomic) NSDictionary *platformKeyProfileOverrides;
@property (copy, nonatomic) NSArray *ineligibleGratisIdentifiers;
@property (copy, nonatomic, readonly) NSSet *allUnavailableItemIdentifiers;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (void)addUnavailableItemIdentifiers:(id)arg1;
- (_Bool)isUnavailableItemIdentifier:(id)arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;

@end
