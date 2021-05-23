/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CSVoiceProfileContext : NSObject

{
    NSString *_profileId;
    NSString *_languageCode;
    NSString *_productCategory;
    NSNumber *_version;
    unsigned long long _onboardType;
    NSString *_homeId;
    NSString *_userName;
    NSString *_siriDebugProfileId;
}

@property (retain, nonatomic) NSString *profileId;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *productCategory;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) unsigned long long onboardType;
@property (retain, nonatomic) NSString *homeId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *siriDebugProfileId;

- (id)description;
- (id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 sharedHomeId:(id)arg5 userName:(id)arg6;

@end
