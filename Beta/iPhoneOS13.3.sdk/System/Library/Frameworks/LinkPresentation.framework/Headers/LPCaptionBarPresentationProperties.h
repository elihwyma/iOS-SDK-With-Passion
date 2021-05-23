/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPCaptionRowPresentationProperties, LPImage, LPImagePresentationProperties, NSArray, NSNumber;

@interface LPCaptionBarPresentationProperties : NSObject

{
    LPCaptionRowPresentationProperties *_aboveTop;
    LPCaptionRowPresentationProperties *_top;
    LPCaptionRowPresentationProperties *_bottom;
    LPCaptionRowPresentationProperties *_belowBottom;
    LPImage *_leadingIcon;
    NSArray *_additionalLeadingIcons;
    LPImagePresentationProperties *_leadingIconProperties;
    LPImage *_trailingIcon;
    NSArray *_additionalTrailingIcons;
    LPImagePresentationProperties *_trailingIconProperties;
    long long _leadingAccessoryType;
    long long _trailingAccessoryType;
    NSNumber *_minimumHeight;
    struct CGSize _leadingIconSize;
    struct CGSize _trailingIconSize;
}

@property (nonatomic, readonly) _Bool hasAnyContent;
@property (retain, nonatomic) LPImage *leadingIcon;
@property (nonatomic) struct CGSize leadingIconSize;
@property (retain, nonatomic) NSArray *additionalLeadingIcons;
@property (retain, nonatomic) LPImagePresentationProperties *leadingIconProperties;
@property (retain, nonatomic) LPImage *trailingIcon;
@property (nonatomic) struct CGSize trailingIconSize;
@property (retain, nonatomic) NSArray *additionalTrailingIcons;
@property (retain, nonatomic) LPImagePresentationProperties *trailingIconProperties;
@property (nonatomic) long long leadingAccessoryType;
@property (nonatomic) long long trailingAccessoryType;
@property (retain, nonatomic, readonly) LPCaptionRowPresentationProperties *aboveTop;
@property (retain, nonatomic, readonly) LPCaptionRowPresentationProperties *top;
@property (retain, nonatomic, readonly) LPCaptionRowPresentationProperties *bottom;
@property (retain, nonatomic, readonly) LPCaptionRowPresentationProperties *belowBottom;
@property (retain, nonatomic) NSNumber *minimumHeight;

- (id)init;
- (id)leftIcon;
- (id)rightIcon;
- (void)applyToAllCaptions:(CDUnknownBlockType)arg1;
- (long long)leftAccessoryType;
- (long long)rightAccessoryType;

@end
