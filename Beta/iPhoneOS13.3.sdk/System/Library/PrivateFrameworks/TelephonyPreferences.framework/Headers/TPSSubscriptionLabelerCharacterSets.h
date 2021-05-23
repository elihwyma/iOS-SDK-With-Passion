/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@interface TPSSubscriptionLabelerCharacterSets : NSObject

{
    struct USet *_CJK;
}

@property (nonatomic, readonly) struct USet *CJK;

+ (struct USet *)_characterSetFromPattern:(id)arg1;

- (id)init;
- (void)dealloc;

@end
