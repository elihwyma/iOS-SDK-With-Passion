/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FMInternalOwnerAccount : NSObject

{
    NSString *_personId;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
}

@property (copy, nonatomic) NSString *personId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;

- (id)description;
- (id)initWithAccount:(id)arg1;

@end
