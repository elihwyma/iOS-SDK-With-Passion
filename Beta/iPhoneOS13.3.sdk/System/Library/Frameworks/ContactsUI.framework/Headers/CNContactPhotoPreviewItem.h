/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactPhotoPreviewItem : NSObject

{
    NSURL *_previewItemURL;
    NSString *_previewItemTitle;
}

@property (retain, nonatomic) NSURL *previewItemURL;
@property (retain, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
