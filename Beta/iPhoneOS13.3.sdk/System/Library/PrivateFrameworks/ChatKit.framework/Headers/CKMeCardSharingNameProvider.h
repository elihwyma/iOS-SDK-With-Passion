/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKMeCardSharingNameProvider : NSObject

{
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nickname;
}

@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *nickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nameContactForPrimaryAccount;
+ (id)nameProviderForNickname:(id)arg1;
+ (id)nameProviderForContact:(id)arg1;
+ (id)nameProviderForPrimaryAccount;
+ (id)nameProviderForAccount:(id)arg1;

@end
