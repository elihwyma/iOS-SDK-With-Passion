/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKMockSettingsUIVisibilityProvider : NSObject

{
    _Bool _settingsUIVisible;
}

@property _Bool settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)connectToDaemon;

@end
