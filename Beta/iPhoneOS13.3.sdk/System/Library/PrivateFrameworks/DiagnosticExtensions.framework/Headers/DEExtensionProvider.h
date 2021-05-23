/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DEExtensionProvider : NSObject

{
    _Bool _canGenerateNewAttachment;
    _Bool _allowUserAttachmentSelection;
    NSString *_loggingConsent;
}

@property (copy, nonatomic) NSString *loggingConsent;
@property (nonatomic) _Bool canGenerateNewAttachment;
@property (nonatomic) _Bool allowUserAttachmentSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)disableLogging;
- (_Bool)isLoggingEnabled;
- (id)attachmentsForParameters:(id)arg1;
- (_Bool)canEnableLogging;
- (void)enableLogging;
- (id)attachmentList;
- (id)attachmentsWithParams:(id)arg1;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)_getHostname;

@end
