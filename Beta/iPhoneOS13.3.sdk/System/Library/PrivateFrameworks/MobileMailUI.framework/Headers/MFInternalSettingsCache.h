/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@interface MFInternalSettingsCache : NSObject

{
    _Bool _tiltedTabSkyViewEnabled;
    _Bool _UIDebuggingEnabled;
}

@property (nonatomic) _Bool tiltedTabSkyViewEnabled;
@property (nonatomic) _Bool UIDebuggingEnabled;

+ (id)sharedCache;

@end
