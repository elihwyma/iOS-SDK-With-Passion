/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface _EntitlementCheckResult : NSObject

{
    _Bool _entitled;
    NSError *_error;
    NSString *_group;
    NSString *_entitlement;
}

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *entitlement;
@property (nonatomic, getter=isEntitled) _Bool entitled;

- (id)initWithEntitlement:(id)arg1 group:(id)arg2;

@end
