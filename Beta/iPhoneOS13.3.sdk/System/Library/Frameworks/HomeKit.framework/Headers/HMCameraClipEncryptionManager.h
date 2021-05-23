/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HMCameraClipEncryptionManager : NSObject

{
    NSData *_key;
}

@property (copy, readonly) NSData *key;

- (id)init;
- (id)initWithKey:(id)arg1;
- (id)encryptedDataContextFromData:(id)arg1;

@end
