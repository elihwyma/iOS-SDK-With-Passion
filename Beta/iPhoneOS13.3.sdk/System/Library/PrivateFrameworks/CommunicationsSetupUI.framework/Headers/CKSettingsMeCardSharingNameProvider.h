/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKSettingsMeCardSharingNameProvider : NSObject

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

+ (id)nameProviderForNickname:(id)arg1;

@end
