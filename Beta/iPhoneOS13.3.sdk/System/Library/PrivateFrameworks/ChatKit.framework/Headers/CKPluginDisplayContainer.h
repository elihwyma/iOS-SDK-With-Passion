/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject

{
    IMPluginPayload *_pluginPayload;
    UIImage *_composeImage;
}

@property (retain, nonatomic) IMPluginPayload *pluginPayload;
@property (retain, nonatomic) UIImage *composeImage;

+ (_Bool)supportsSecureCoding;
+ (id)pluginDisplayContinerWithPluginPayload:(id)arg1 composeImage:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemProvider;
- (id)pasteboardItem;

@end
