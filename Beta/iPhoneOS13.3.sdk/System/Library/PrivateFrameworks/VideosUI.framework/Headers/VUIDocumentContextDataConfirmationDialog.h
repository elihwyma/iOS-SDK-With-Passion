/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataConfirmationDialog : VUIDocumentContextData

{
    NSString *_confirmationDialogType;
    NSString *_name;
}

@property (copy, nonatomic) NSString *confirmationDialogType;
@property (copy, nonatomic) NSString *name;

- (id)jsonData;

@end
