/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SOKerberosCredential : NSObject

{
    unsigned int _lifetime;
    NSString *_name;
    NSString *_uuid;
}

@property (retain) NSString *name;
@property unsigned int lifetime;
@property (retain) NSString *uuid;

- (id)init;

@end
