/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUILibraryProductLockupLayout : NSObject

{
    long long _type;
    VUIMediaEntityType *_entityType;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) VUIMediaEntityType *entityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)layoutType;
- (id)initWithLayoutType:(long long)arg1 entityType:(id)arg2;
- (struct CGSize)coverArtImageSize;
- (int)contentDescriptionNumberOfLines;
- (id)contentDescriptionFont;
- (double)coverArtImageRightMargin;
- (double)contentDescriptionTopMargin;
- (double)buttonModuleTopMargin;
- (double)subtitleTopMargin;
- (double)contentDescriptionBottomMargin;
- (double)metadataTopMargin;
- (long long)downloadButtonPosition;
- (double)coverArtBottomPadding;
- (double)titleTopMargin;
- (_Bool)shouldShowTitleLabel;

@end
