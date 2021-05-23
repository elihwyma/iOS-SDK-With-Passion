/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface _SFBrowserWindowStateData : NSObject

{
    _Bool _isActiveDocumentValid;
    _Bool _isTabStateSuccessfullyLoaded;
    _Bool _needsQuickUpdate;
    long long _databaseID;
    NSString *_UUIDString;
    long long _type;
    long long _activeDocumentIndex;
    long long _activePrivateDocumentIndex;
    long long _legacyPlistFileVersion;
    NSString *_sceneID;
}

@property (nonatomic) long long databaseID;
@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) long long type;
@property (nonatomic) long long activeDocumentIndex;
@property (nonatomic) long long activePrivateDocumentIndex;
@property (nonatomic) _Bool isActiveDocumentValid;
@property (nonatomic) _Bool isTabStateSuccessfullyLoaded;
@property (nonatomic) long long legacyPlistFileVersion;
@property (nonatomic, readonly) _Bool isInDatabase;
@property (nonatomic) _Bool needsQuickUpdate;
@property (retain, nonatomic) NSString *sceneID;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithUUIDString:(id)arg1 sceneID:(id)arg2;
- (id)dictionaryPresentation;
- (id)initWithDictionaryPresentation:(id)arg1;

@end
