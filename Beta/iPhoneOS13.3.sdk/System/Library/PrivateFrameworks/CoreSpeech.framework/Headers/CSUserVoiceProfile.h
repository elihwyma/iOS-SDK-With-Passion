/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CSUserVoiceProfile : NSObject

{
    NSString *_locale;
    NSDate *_dateAdded;
    NSString *_voiceProfileFilePath;
    NSString *_profileID;
    NSString *_siriProfileId;
    unsigned long long _onboardedType;
    long long _numberOfExplicitSatVectors;
    long long _numberOfBaseProfileSatVectors;
    long long _numberOfImplicitProfileSatVectors;
    NSString *_sharedHomeID;
    NSString *_siriDebugID;
    NSString *_userName;
}

@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSString *voiceProfileFilePath;
@property (retain, nonatomic) NSString *profileID;
@property (retain, nonatomic) NSString *siriProfileId;
@property (nonatomic) unsigned long long onboardedType;
@property (nonatomic) long long numberOfExplicitSatVectors;
@property (nonatomic) long long numberOfBaseProfileSatVectors;
@property (nonatomic) long long numberOfImplicitProfileSatVectors;
@property (retain, nonatomic) NSString *sharedHomeID;
@property (retain, nonatomic) NSString *siriDebugID;
@property (retain, nonatomic) NSString *userName;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initNewVoiceProfileWithLocale:(id)arg1;

@end
