/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface _UITextAttachmentInteractionHandler : NSObject

{
    NSTextAttachment *_textAttachment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_image;
- (void)_copyImage;
- (void)_saveToCameraRoll;
- (id)defaultAction;
- (id)contextMenuConfiguration;
- (id)initWithTextAttachment:(id)arg1;

@end
