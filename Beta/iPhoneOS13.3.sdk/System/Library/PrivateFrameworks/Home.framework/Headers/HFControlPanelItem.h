/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlPanelItem : HFItem <Swift>

{
    NSString *_uniqueIdentifier;
    NSSet *_controlItems;
    NSDictionary *_displayResults;
    NSDictionary *_controlItemsByUUID;
    NSDictionary *_UUIDsByControlItemPointer;
}

@property (nonatomic, readonly) NSDictionary *displayResults;
@property (nonatomic, readonly) NSDictionary *controlItemsByUUID;
@property (nonatomic, readonly) NSDictionary *UUIDsByControlItemPointer;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSSet *controlItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)standardControlPanelItemsForControlItems:(id)arg1;
+ (id)_controlPanelItemRules;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (long long)sortPriority;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithControlItems:(id)arg1 displayResults:(id)arg2;
- (id)identifierForControlItem:(id)arg1;
- (id)controlItemForIdentifier:(id)arg1;

@end
