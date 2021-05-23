/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HMCameraClipDecryptionManager : NSObject

{
    NSData *_key;
}

@property (copy, readonly) NSData *key;

- (id)initWithKey:(id)arg1;
- (id)dataFromEncryptedDataContext:(id)arg1;

@end
