/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject

{
    NSHashTable *_disabledContexts;
    _Bool _disabled;
}

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (void)disableAutomaticAppearanceForContext:(id)arg1;
- (void)enableAutomaticAppearanceForContext:(id)arg1;

@end
