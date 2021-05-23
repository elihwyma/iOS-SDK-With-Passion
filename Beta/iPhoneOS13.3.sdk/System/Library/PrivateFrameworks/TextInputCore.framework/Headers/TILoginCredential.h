/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TILoginCredential : NSObject

{
    NSString *_username;
    NSString *_password;
    NSString *_site;
}

@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *site;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3;

@end
