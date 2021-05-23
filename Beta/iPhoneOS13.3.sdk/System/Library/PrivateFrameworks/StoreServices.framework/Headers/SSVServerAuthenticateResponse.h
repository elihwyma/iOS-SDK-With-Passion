/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber, NSString, NSURL;

@interface SSVServerAuthenticateResponse : NSObject

{
    NSNumber *_authenticatedAccountIdentifier;
    long long _performedButtonIndex;
    NSURL *_redirectURL;
    long long _selectedButtonIndex;
}

@property (copy, nonatomic) NSNumber *authenticatedAccountIdentifier;
@property (nonatomic) long long performedButtonIndex;
@property (copy, nonatomic) NSURL *redirectURL;
@property (nonatomic) long long selectedButtonIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
