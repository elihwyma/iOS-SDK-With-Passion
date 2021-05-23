/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSString;

@protocol HMApplicationData;

@interface HFReorderableHomeKitItemList : NSObject <Swift>

{
    id <HMApplicationData> _applicationDataContainer;
    NSString *_category;
    NSArray *_sortedHomeKitObjectIdentifiers;
}

@property (nonatomic, readonly) NSString *_applicationDataKey;
@property (copy, nonatomic) NSArray *sortedHomeKitObjectIdentifiers;
@property (weak, nonatomic, readonly) id <HMApplicationData> applicationDataContainer;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) CDUnknownBlockType sortedHomeKitItemComparator;
@property (nonatomic, readonly) CDUnknownBlockType sortedHomeKitObjectComparator;

+ (id)_dataForHomeKitItem:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;
- (CDUnknownBlockType)_homeKitItemDataComparator;
- (CDUnknownBlockType)_sortedHomeKitIdentifierComparator;
- (CDUnknownBlockType)_actionSetTypeComparator;
- (CDUnknownBlockType)_reorderableObjectDateAddedComparator;
- (CDUnknownBlockType)_reorderableObjectTitleComparator;

@end
