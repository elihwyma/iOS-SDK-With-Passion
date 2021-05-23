/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface IMNicknameEncryptionKey : NSObject

{
    NSData *_data;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly) const void *bytes;
@property (nonatomic, readonly) unsigned long long length;

- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
