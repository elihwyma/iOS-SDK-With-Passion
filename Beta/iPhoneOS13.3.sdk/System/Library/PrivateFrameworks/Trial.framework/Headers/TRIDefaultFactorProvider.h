/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TRIDefaultFactorProvider : NSObject

{
    NSMutableDictionary *_factorProviders;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct NSString *)treatmentIdWithNamespace:(unsigned int)arg1;
- (id)levelForFactor:(struct NSString *)arg1 withNamespace:(unsigned int)arg2;
- (id)providerForNamespace:(unsigned int)arg1;
- (void)invalidateFactorsWithNamespaceId:(unsigned int)arg1;

@end
