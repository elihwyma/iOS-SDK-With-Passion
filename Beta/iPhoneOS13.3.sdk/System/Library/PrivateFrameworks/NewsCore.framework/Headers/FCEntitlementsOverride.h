/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject

{
    NSArray *_entitlements;
    NSError *_error;
}

@property (copy, nonatomic) NSArray *entitlements;
@property (copy, nonatomic) NSError *error;

- (id)initWithEntitlements:(id)arg1 error:(id)arg2;

@end
