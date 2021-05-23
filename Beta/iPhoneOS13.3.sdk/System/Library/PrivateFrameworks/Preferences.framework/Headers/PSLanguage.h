/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PSLanguage : NSObject

{
    NSString *_languageCode;
    NSString *_languageName;
    NSString *_localizedLanguageName;
}

@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *languageName;
@property (retain, nonatomic) NSString *localizedLanguageName;

+ (id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3;

- (_Bool)displayNamesAreEqual;

@end
