/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject

{
    NSString *_title;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
