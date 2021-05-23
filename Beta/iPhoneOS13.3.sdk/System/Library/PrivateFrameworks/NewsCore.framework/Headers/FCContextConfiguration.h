/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCContextConfiguration : NSObject <Swift>

{
    _Bool _isProductionContentEnvironment;
    _Bool _isProductionPrivateDataEnvironment;
    long long _environment;
    NSString *_contentContainerIdentifier;
    NSString *_contentContainerCombinationIdentifier;
    NSString *_privateDataContainerIdentifier;
    NSString *_privateDataSecureContainerIdentifier;
    NSString *_privateDataContainerCombinationIdentifier;
}

@property (nonatomic, readonly) _Bool isProductionContentEnvironment;
@property (nonatomic, readonly) _Bool isProductionPrivateDataEnvironment;
@property (copy, nonatomic, readonly) NSString *privateDataContainerIdentifier;
@property (copy, nonatomic, readonly) NSString *privateDataSecureContainerIdentifier;
@property (copy, nonatomic, readonly) NSString *privateDataContainerCombinationIdentifier;
@property (nonatomic, readonly) long long environment;
@property (copy, nonatomic, readonly) NSString *contentContainerIdentifier;
@property (copy, nonatomic, readonly) NSString *contentContainerCombinationIdentifier;

+ (id)defaultConfiguration;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironment:(long long)arg1;
- (id)initWithProductionContentEnvironment:(_Bool)arg1 productionPrivateDataEnvironment:(_Bool)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7;

@end
