/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class AVMediaSelectionOption, NSString;

@interface TVPAudioOption : NSObject

{
    int _trackID;
    AVMediaSelectionOption *_avMediaSelectionOption;
    NSString *_localizedDisplayString;
    NSString *_title;
    NSString *_languageCodeFromLocale;
    NSString *_languageCodeBCP47;
    id _propertyListRepresentation;
    NSString *_savedLocaleLanguageCode;
}

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption;
@property (copy, nonatomic) NSString *localizedDisplayString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *languageCodeFromLocale;
@property (copy, nonatomic) NSString *languageCodeBCP47;
@property (retain, nonatomic) id propertyListRepresentation;
@property (nonatomic) int trackID;
@property (copy, nonatomic) NSString *savedLocaleLanguageCode;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithOption:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)initWithSavedTrackID:(int)arg1 savedLocaleLanguageCode:(id)arg2;

@end
