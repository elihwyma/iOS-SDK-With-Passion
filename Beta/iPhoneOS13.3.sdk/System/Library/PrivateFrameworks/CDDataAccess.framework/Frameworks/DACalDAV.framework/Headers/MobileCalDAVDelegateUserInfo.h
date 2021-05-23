/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject

{
    _Bool _allowWrite;
    NSString *_principalPath;
    NSString *_displayName;
    NSString *_uid;
}

@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) _Bool allowWrite;

+ (id)infoFromCalDAVDetails:(id)arg1 allowWrite:(_Bool)arg2;

- (id)description;
- (id)initWithPrincipalPath:(id)arg1 displayName:(id)arg2 allowWrite:(_Bool)arg3;

@end
