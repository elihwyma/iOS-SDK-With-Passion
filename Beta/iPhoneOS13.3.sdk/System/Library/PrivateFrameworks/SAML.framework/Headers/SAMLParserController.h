/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SAMLParserController : NSObject

{
    NSData *_schemaData;
}

@property (retain, nonatomic) NSData *schemaData;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (id)schema;
- (id)parseCachedResponse:(id)arg1 error:(id *)arg2;
- (id)dataFromString:(id)arg1 error:(id *)arg2;
- (id)newAttributeQuery:(id)arg1 error:(id *)arg2;
- (id)newAuthNRequest:(id)arg1 error:(id *)arg2;
- (id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id *)arg3;
- (id)newLogoutRequest:(id *)arg1;
- (id)parseResponse:(id)arg1 error:(id *)arg2;

@end
