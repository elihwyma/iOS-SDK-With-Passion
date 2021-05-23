/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@class DEExtensionHostContext, NSExtension, NSString;

@interface DEExtension : NSObject

{
    _Bool _isLoggingEnabled;
    _Bool _allowUserAttachmentSelection;
    NSString *_attachmentsName;
    NSString *_identifier;
    DEExtensionHostContext *_context;
    NSString *_loggingConsent;
    NSExtension *_extension;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSString *attachmentsName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) DEExtensionHostContext *context;
@property (nonatomic) _Bool isLoggingEnabled;
@property (retain, nonatomic) NSString *loggingConsent;
@property (nonatomic) _Bool allowUserAttachmentSelection;

- (id)description;
- (void)attachmentsForParameters:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (void)attachmentListWithHandler:(CDUnknownBlockType)arg1;
- (void)endUsingExtension;
- (void)performWithHostContext:(CDUnknownBlockType)arg1;
- (id)initWithNSExtension:(id)arg1;

@end
