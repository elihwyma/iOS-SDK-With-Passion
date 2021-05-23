/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailMessageLibrary, MFMailboxProvider, NSString;

@interface MFMessageTransformer : NSObject

{
    MFMailMessageLibrary *_library;
    MFMailboxProvider *_mailboxProvider;
}

@property (retain, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) MFMailboxProvider *mailboxProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 loaderBlock:(CDUnknownBlockType)arg3;
- (id)initWithLibrary:(id)arg1 mailboxProvider:(id)arg2;
- (id)transformLegacyMailMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)_transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 duplicateInfo:(id)arg3 loaderBlock:(CDUnknownBlockType)arg4;

@end
