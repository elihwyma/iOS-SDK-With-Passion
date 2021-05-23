/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLScoping : SAMLBaseElement

@property (nonatomic, readonly) NSNumber *proxyCount;
@property (nonatomic, readonly) NSArray *idpList;
@property (nonatomic, readonly) NSArray *requesterIds;
@property (nonatomic, readonly) NSString *getComplete;

+ (id)createElement:(id *)arg1;

- (void)addRequesterId:(id)arg1;

@end
