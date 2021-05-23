/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HUCameraUsageOptionItem : HFItem

{
    _Bool _updateInProgress;
    unsigned long long _presence;
    unsigned long long _usage;
    unsigned long long _sortOrder;
    NSSet *_cameraProfiles;
}

@property (nonatomic, readonly) unsigned long long presence;
@property (nonatomic, readonly) unsigned long long usage;
@property (nonatomic, readonly) unsigned long long sortOrder;
@property (copy, nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) NSString *privacyDescription;
@property (nonatomic) _Bool updateInProgress;

+ (unsigned long long)sortOrderForUsage:(unsigned long long)arg1;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithPresence:(unsigned long long)arg1 cameraUsage:(unsigned long long)arg2 cameraProfiles:(id)arg3;

@end
