/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TRINamespaceFactorProviderChain : NSObject

{
    NSArray *_directoryChain;
    NSArray *_providerChain;
    unsigned int _namespaceId;
}

@property (readonly) unsigned int namespaceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)factorProviderWithNamespaceId:(unsigned int)arg1;
+ (id)factorProviderWithNamespaceId:(unsigned int)arg1 directoryChain:(id)arg2;

- (struct NSString *)treatmentId;
- (unsigned int)namespaceVersion;
- (unsigned int)namespaceCompatibilityVersion;
- (id)levelForFactor:(struct NSString *)arg1;
- (id)initWithNamespaceId:(unsigned int)arg1 directoryChain:(id)arg2;
- (void)resetProviderChain;
- (struct NSString *)treatmentIdForFactor:(struct NSString *)arg1;

@end
