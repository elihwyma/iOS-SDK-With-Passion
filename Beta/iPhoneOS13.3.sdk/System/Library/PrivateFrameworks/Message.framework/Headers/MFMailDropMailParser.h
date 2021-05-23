/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFMailDropMailParser : NSObject

+ (void)parseURL:(id)arg1 intoMetadata:(id)arg2;
+ (id)parseExpiration:(double)arg1;
+ (_Bool)_domainIsWhitelisted:(id)arg1;
+ (void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2;
+ (void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2;
+ (id)_parseURLQuery:(id)arg1;
+ (id)parseHeaderValue:(id)arg1 forField:(id)arg2;

@end
