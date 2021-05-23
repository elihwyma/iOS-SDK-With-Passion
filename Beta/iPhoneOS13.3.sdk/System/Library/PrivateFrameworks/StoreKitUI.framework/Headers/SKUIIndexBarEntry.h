/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UIColor, UIImage;

@interface SKUIIndexBarEntry : NSObject

{
    struct CGSize _contentSize;
    _Bool _hasValidContentSize;
    UIColor *_tintColor;
    long long _entryType;
    long long _visibilityPriority;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) struct CGSize size;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) long long entryType;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property (nonatomic, readonly) NSAttributedString *entryAttributedString;
@property (nonatomic, readonly) UIImage *entryImage;
@property (nonatomic) long long visibilityPriority;

+ (id)entryWithAttributedString:(id)arg1;
+ (id)entryWithImage:(id)arg1;
+ (id)placeholderEntryWithSize:(struct CGSize)arg1;
+ (id)systemCombinedEntry;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_tintColorDidChange;
- (struct CGSize)_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (void)_drawInRect:(struct CGRect)arg1;

@end
