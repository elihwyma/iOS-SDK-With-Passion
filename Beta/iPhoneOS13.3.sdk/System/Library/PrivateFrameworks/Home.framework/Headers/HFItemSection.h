/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;

@interface HFItemSection : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_headerTitle;
    NSString *_footerTitle;
    NSAttributedString *_attributedFooterTitle;
    NSDictionary *_userInfo;
    NSArray *_items;
}

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) NSAttributedString *attributedFooterTitle;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *groupIdentifier;
@property (copy, nonatomic, readonly) NSArray *diffableItems;

+ (id)na_identity;
+ (CDUnknownBlockType)defaultItemComparator;
+ (CDUnknownBlockType)itemResultManualSortComparator;
+ (id)filterSections:(id)arg1 toDisplayedItems:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)_createCopyMutable:(_Bool)arg1;

@end
