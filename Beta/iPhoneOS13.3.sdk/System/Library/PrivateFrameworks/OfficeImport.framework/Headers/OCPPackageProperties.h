/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject

{
    NSString *mCreator;
    NSString *mDescription;
    NSString *mKeywords;
    NSString *mTitle;
    NSString *mAppVersion;
    NSString *mSubject;
    NSString *mCompany;
}

@property (retain) NSString *subject;
@property (retain) NSString *company;

- (id)description;
- (id)title;
- (id)keywords;
- (id)creator;
- (id)appVersion;
- (id)initWithCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;
- (void)readFromCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;
- (void)readFromCoreXml:(struct _xmlDoc *)arg1;
- (void)readFromAppXml:(struct _xmlDoc *)arg1;

@end
