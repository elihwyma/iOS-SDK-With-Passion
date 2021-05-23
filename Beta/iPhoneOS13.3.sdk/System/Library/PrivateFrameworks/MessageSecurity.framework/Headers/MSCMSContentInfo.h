/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

#import <MessageSecurity/Swift-Protocol.h>

@class MSOID, NSData, NSString;

@protocol MSCMSMessage;

@interface MSCMSContentInfo : NSObject <Swift>

{
    NSData *_content;
    id <MSCMSMessage> _embeddedContent;
    MSOID *_contentType;
}

@property (retain) NSData *content;
@property (retain) id <MSCMSMessage> embeddedContent;
@property (retain) MSOID *contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id *)arg3;

- (id)encodeMessageSecurityObject:(id *)arg1;
- (id)initWithEmbeddedContent:(id)arg1;
- (id)initWithDataContent:(id)arg1;

@end
