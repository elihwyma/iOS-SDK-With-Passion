/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, SKUIStorePageSectionContext, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplit : NSObject <Swift>

{
    UIColor *_dividerColor;
    long long _numberOfPageSections;
    NSArray *_pageComponents;
    SKUIStorePageSectionContext *_sectionContext;
    double _widthFraction;
}

@property (copy, nonatomic) UIColor *dividerColor;
@property (nonatomic) long long numberOfPageSections;
@property (copy, nonatomic) NSArray *pageComponents;
@property (retain, nonatomic) SKUIStorePageSectionContext *sectionContext;
@property (nonatomic) double widthFraction;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
