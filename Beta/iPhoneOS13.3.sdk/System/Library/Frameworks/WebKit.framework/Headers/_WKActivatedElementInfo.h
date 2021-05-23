/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, UIImage;

@interface _WKActivatedElementInfo : NSObject

{
    struct RetainPtr<NSURL> _URL;
    struct RetainPtr<NSURL> _imageURL;
    struct RetainPtr<NSString> _title;
    struct IntPoint _interactionLocation;
    struct RetainPtr<NSString> _ID;
    struct RefPtr<WebKit::ShareableBitmap, WTF::DumbPtrTraits<WebKit::ShareableBitmap>> _image;
    struct RetainPtr<UIImage> _uiImage;
    struct RetainPtr<NSDictionary> _userInfo;
    _Bool _animatedImage;
    long long _type;
    struct CGRect _boundingRect;
}

@property (nonatomic, readonly) struct IntPoint _interactionLocation;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) _Bool isAnimatedImage;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) UIImage *image;

+ (id)activatedElementInfoWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition *)arg1;

- (id).cxx_construct;
- (id)_initWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition *)arg1;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const struct IntPoint *)arg4 title:(id)arg5 ID:(id)arg6 rect:(struct CGRect)arg7 image:(struct ShareableBitmap *)arg8 userInfo:(id)arg9;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const struct IntPoint *)arg4 title:(id)arg5 ID:(id)arg6 rect:(struct CGRect)arg7 image:(struct ShareableBitmap *)arg8;

@end
