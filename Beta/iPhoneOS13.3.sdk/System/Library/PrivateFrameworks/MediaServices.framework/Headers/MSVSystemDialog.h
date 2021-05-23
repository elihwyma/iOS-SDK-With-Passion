/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class MSVSystemDialogOptions, NSArray, NSMutableArray;

@interface MSVSystemDialog : NSObject

{
    NSMutableArray *_textFields;
    struct __CFUserNotification *_presentedUserNotification;
    struct __CFRunLoopSource *_activeRunLoopSource;
    CDUnknownBlockType _pendingCompletion;
    MSVSystemDialogOptions *_options;
}

@property (nonatomic) struct __CFUserNotification *presentedUserNotification;
@property (nonatomic) struct __CFRunLoopSource *activeRunLoopSource;
@property (copy, nonatomic) CDUnknownBlockType pendingCompletion;
@property (nonatomic, readonly) MSVSystemDialogOptions *options;
@property (nonatomic, readonly) NSArray *textFields;

+ (id)systemDialogWithOptions:(id)arg1;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)dismiss;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)addTextField:(id)arg1;
- (void)addTextFieldWithTitle:(id)arg1 secure:(_Bool)arg2;
- (void)clearTextFields;

@end
