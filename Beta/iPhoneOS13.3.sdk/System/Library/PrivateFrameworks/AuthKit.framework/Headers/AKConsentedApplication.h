/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <Swift>

{
    NSArray *_scopes;
    NSString *_clientID;
    long long _state;
    NSString *_transferState;
    NSString *_primaryClientID;
}

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *transferState;
@property (retain, nonatomic) NSString *primaryClientID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;

@end
