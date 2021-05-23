/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PFAdjustment : NSObject

{
    _Bool _enabled;
    unsigned long long _formatVersion;
    NSString *_identifier;
    NSDictionary *_settings;
    NSString *_autoIdentifier;
    NSDictionary *_autoSettings;
    NSString *_maskUUID;
}

@property (nonatomic, readonly) unsigned long long formatVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly) NSString *autoIdentifier;
@property (nonatomic, readonly) NSDictionary *autoSettings;
@property (nonatomic, readonly) _Bool enabled;
@property (nonatomic, readonly) NSString *maskUUID;

+ (_Bool)isValidArchiveDictionary:(id)arg1 errors:(id)arg2;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)archiveDictionary;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(_Bool)arg5;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(_Bool)arg5 maskUUID:(id)arg6;
- (id)initWithArchiveDictionary:(id)arg1;

@end
