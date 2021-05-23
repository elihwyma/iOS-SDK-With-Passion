/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSAttributedString, NSDictionary, NSString;

@protocol PXLibrarySummaryOutputPresenter <Swift>

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool wantsDisclosureIndicator;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;
@property (nonatomic, readonly) NSDictionary *emphasizedAttributes;

@end
