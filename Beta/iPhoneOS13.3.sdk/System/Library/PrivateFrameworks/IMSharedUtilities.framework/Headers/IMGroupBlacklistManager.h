/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface IMGroupBlacklistManager : NSObject

{
    NSDate *_lastModifiedDate;
}

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlacklistFilename;

- (id)init;
- (void)save;
- (void)loadData;
- (id)initFromFile:(id)arg1;
- (void)loadFromFile:(id)arg1;
- (_Bool)isFeatureDisabled;
- (void)reloadIfNeeded;
- (void)_updateLastModifiedDate:(id)arg1;
- (_Bool)hasFileChanged;
- (void)blacklistGroupId:(id)arg1;
- (_Bool)isGroupInBlacklist:(id)arg1;

@end
