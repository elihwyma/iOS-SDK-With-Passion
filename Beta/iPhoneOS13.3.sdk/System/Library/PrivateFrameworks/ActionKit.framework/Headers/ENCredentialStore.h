/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <Swift>

{
    NSMutableDictionary *_store;
}

@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)loadCredentialsFromAppDefaults;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearAllCredentials;
- (void)addCredentials:(id)arg1;
- (id)credentialsForHost:(id)arg1;
- (void)removeCredentials:(id)arg1;

@end
