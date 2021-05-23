/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SASBoardServicesConfiguration : NSObject

{
    NSString *_machServiceIdentifier;
    NSString *_presentationDomain;
    NSString *_presentationIdentifier;
    NSString *_signalDomain;
    NSString *_signalIdentifier;
}

@property (retain, nonatomic) NSString *machServiceIdentifier;
@property (retain, nonatomic) NSString *presentationDomain;
@property (retain, nonatomic) NSString *presentationIdentifier;
@property (retain, nonatomic) NSString *signalDomain;
@property (retain, nonatomic) NSString *signalIdentifier;

+ (id)new;
+ (id)configuration;

- (id)init;
- (id)_init;
- (id)identifierForService:(long long)arg1;
- (id)domainForService:(long long)arg1;

@end
