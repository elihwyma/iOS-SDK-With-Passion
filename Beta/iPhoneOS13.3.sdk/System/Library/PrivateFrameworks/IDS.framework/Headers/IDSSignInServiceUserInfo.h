/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@interface IDSSignInServiceUserInfo : NSObject

{
    unsigned long long _type;
    unsigned long long _status;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long status;

- (id)description;
- (id)initWithUserType:(unsigned long long)arg1 status:(unsigned long long)arg2;

@end
