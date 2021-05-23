/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class GSPermanentStorage, NSDate, NSPersonNameComponents, NSString, NSURL;

@protocol NSCopying><NSSecureCoding;

@interface BRNonLocalVersion : NSObject

{
    NSURL *_url;
    NSString *_displayName;
    NSString *_etag;
    unsigned long long _size;
    NSDate *_modificationDate;
    NSString *_lastEditorDeviceName;
    NSPersonNameComponents *_lastEditorNameComponents;
    _Bool _hasThumbnail;
    GSPermanentStorage *_versionsStore;
    long long _sandboxHandle;
    NSURL *_physicalURL;
}

@property (nonatomic) _Bool hasThumbnail;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) id <NSCopying><NSSecureCoding> persistentIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSString *lastEditorDeviceName;
@property (nonatomic, readonly) NSString *lastEditorFormattedName;
@property (nonatomic, readonly) NSPersonNameComponents *lastEditorNameComponents;
@property (nonatomic, readonly) _Bool isLatestVersion;

+ (id)listVersionsOfDocumentAtURL:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(_Bool)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorNameComponents:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11;

@end
