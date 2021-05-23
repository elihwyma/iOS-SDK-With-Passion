/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@protocol CRKKeychain;

@interface CRKKeychainProvider : NSObject

{
    id <CRKKeychain> _keychain;
}

@property (nonatomic, readonly) id <CRKKeychain> keychain;

+ (id)sharedProvider;
+ (id)makeKeychainForCurrentEnvironment;

- (id)initWithKeychain:(id)arg1;

@end
