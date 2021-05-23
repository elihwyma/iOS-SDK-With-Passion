/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject

{
    NSMutableDictionary *_userDictionaryCache;
}

@property (nonatomic, readonly) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (nonatomic, readonly) NSSet *excludedExtensionsWorthPreserving;
@property (nonatomic, readonly) long long minFileSizeForThumbnailTransfer;

+ (id)sharedDefaults;
+ (id)defaultExcludedFilenamesWorthWarningAtLogout;
+ (id)defaultExcludedExtensionsWorthPreserving;
+ (id)defaultExcludedFilenamesWorthPreserving;

- (id)init;
- (id)_init;

@end
