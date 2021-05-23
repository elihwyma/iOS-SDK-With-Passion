/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <SpringBoardUI/SBUIBannerItem.h>

@class CPImageSet, NSArray, NSString, NSUUID;

@protocol CPSBannerItemDelegate;

@interface CPSBannerItem : SBUIBannerItem

{
    NSUUID *_identifier;
    NSString *_bundleIdentifier;
    NSArray *_textVariants;
    NSArray *_detailTextVariants;
    NSArray *_attributedDetailTextVariants;
    CPImageSet *_imageSet;
    id <CPSBannerItemDelegate> _delegate;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id <CPSBannerItemDelegate> delegate;
@property (nonatomic, readonly) NSArray *textVariants;
@property (nonatomic, readonly) NSArray *detailTextVariants;
@property (nonatomic, readonly) NSArray *attributedDetailTextVariants;
@property (nonatomic, readonly) CPImageSet *imageSet;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (_Bool)isEqualToBannerItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 attributedDetailTextVariants:(id)arg5 imageSet:(id)arg6 delegate:(id)arg7;

@end
