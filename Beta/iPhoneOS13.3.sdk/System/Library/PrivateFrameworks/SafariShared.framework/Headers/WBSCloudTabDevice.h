/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WBSCloudTabDevice : NSObject

{
    _Bool _closeRequestSupported;
    _Bool _hasDuplicateName;
    _Bool _ephemeralDevice;
    _Bool _cloudKitBookmarkSyncingSupported;
    NSString *_name;
    NSString *_uuid;
    NSArray *_tabs;
    NSDate *_lastModified;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isCloseRequestSupported) _Bool closeRequestSupported;
@property (nonatomic, readonly) _Bool hasDuplicateName;
@property (nonatomic, readonly, getter=isEphemeralDevice) _Bool ephemeralDevice;
@property (copy, nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSArray *tabs;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, getter=isCloudKitBookmarkSyncingSupported) _Bool cloudKitBookmarkSyncingSupported;

+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 isEphemeralDevice:(_Bool)arg5;
+ (_Bool)isCloudTabDeviceDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;
+ (id)deviceNameInDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (_Bool)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (_Bool)isEphemeralDeviceInDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(_Bool)arg6;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)deviceByRemovingTab:(id)arg1;
- (id)deviceByRemovingTabs:(id)arg1;

@end
