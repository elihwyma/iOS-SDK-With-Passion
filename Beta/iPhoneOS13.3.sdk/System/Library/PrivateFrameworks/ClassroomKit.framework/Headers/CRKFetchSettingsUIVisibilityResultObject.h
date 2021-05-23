/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@interface CRKFetchSettingsUIVisibilityResultObject : CATTaskResultObject

{
    _Bool _settingsUIVisible;
}

@property (nonatomic) _Bool settingsUIVisible;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
