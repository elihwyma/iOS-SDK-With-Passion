/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSString, UIApplicationExtensionActivity, UIImage;

__attribute__((visibility("hidden")))
@interface PUEditPlugin : NSObject

{
    UIApplicationExtensionActivity *__applicationExtensionActivity;
    unsigned long long _category;
    NSExtension *_extension;
}

@property (nonatomic, readonly) UIApplicationExtensionActivity *_applicationExtensionActivity;
@property (nonatomic) unsigned long long category;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) UIImage *smallIcon;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIImage *icon;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExtension:(id)arg1 pluginCategoryType:(unsigned long long)arg2;

@end
