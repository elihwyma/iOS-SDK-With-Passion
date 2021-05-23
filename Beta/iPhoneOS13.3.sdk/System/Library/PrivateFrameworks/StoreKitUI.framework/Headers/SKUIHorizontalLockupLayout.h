/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupLayout : NSObject

{
    NSMutableArray *_columns;
    double _imageMarginRight;
    struct UIEdgeInsets _metadataColumnEdgeInsets;
    double _metadataColumnMinHeight;
    double _tallestNonMetadataColumnHeight;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) struct UIEdgeInsets metadataColumnEdgeInsets;

+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;
+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;

- (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;
- (double)topPaddingForViewElement:(id)arg1;
- (double)bottomPaddingForViewElement:(id)arg1;
- (id)initWithLockup:(id)arg1 context:(id)arg2;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;
- (double)columnSpacingForColumnIdentifier:(long long)arg1;
- (struct CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;

@end
