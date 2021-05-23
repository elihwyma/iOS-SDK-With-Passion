/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBAppVisibilityPreferences : NSObject

{
    NSString *_bundleID;
    _Bool _defaultVisible;
    _Bool _currentlyVisible;
}

@property (readonly) _Bool defaultVisible;
@property _Bool currentlyVisible;

- (id)description;
- (_Bool)update;
- (id)initWithDefaultVisible:(_Bool)arg1 bundleID:(id)arg2;

@end
