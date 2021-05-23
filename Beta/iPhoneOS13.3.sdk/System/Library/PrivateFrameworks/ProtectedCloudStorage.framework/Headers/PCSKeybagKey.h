/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface PCSKeybagKey : NSObject

{
    NSData *_data;
    long long _flags;
}

@property (retain) NSData *data;
@property long long flags;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
