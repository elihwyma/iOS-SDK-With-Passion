/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface UMUserSwitchContext : NSObject

{
    _Bool _secondaryActionRequired;
    NSData *_setupData;
    NSString *_shortLivedToken;
    NSDictionary *_environmentsByServices;
}

@property (copy, nonatomic) NSData *setupData;
@property (copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) _Bool secondaryActionRequired;
@property (copy, nonatomic) NSDictionary *environmentsByServices;

+ (id)contextWithDataRepresentation:(id)arg1;
+ (_Bool)_isInternalBuild;
+ (void)_switchEnvironmentsByServices:(id)arg1;
+ (id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(_Bool)arg3;

- (id)description;
- (id)dataRepresentation;
- (id)dictRepresentation;

@end
