/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSData, NSString;

@interface MRGenericMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSData *data;

- (unsigned long long)type;
- (id)initWithKey:(id)arg1 data:(id)arg2;

@end
