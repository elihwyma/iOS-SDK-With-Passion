/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class DHKey, NGMPublicPreKey;

__attribute__((visibility("hidden")))
@interface NGMFullPrekey : NSObject

{
    DHKey *_dhKey;
    NGMPublicPreKey *_publicPrekey;
}

@property (nonatomic, readonly) DHKey *dhKey;
@property (nonatomic, readonly) NGMPublicPreKey *publicPrekey;

- (id)description;
- (_Bool)delete;
- (id)initWithPrekeySignedBy:(id)arg1 error:(id *)arg2;
- (id)initWithPBPrekey:(id)arg1 error:(id *)arg2;
- (id)pbDevicePrekey;

@end
