/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface TUContactsDataProviderIgnoredHandles : NSObject

{
    NSSet *_handlesToIgnore;
}

@property (copy, nonatomic, readonly) NSSet *handlesToIgnore;

- (id)init;
- (_Bool)contains:(id)arg1;
- (void)loadHandles;

@end
