/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@class NSAttributedString;

@protocol PXMutableLabelTypesetter

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) long long typesettingMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) _Bool allowTruncation;
@property (nonatomic) double minimumTruncatedScaleFactor;

@end
