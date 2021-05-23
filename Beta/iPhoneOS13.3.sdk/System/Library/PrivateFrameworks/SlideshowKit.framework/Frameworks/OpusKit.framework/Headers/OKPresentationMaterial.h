/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableDictionary, NSString;

@interface OKPresentationMaterial : OKPresentationCanvas

{
    NSString *_templateName;
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSString *_className;
}

@property (copy, nonatomic) NSString *className;

+ (id)materialWithName:(id)arg1 templateName:(id)arg2 className:(id)arg3 settings:(id)arg4 userData:(id)arg5;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3;
- (id)parentWidget;
- (id)materialTemplate;

@end
