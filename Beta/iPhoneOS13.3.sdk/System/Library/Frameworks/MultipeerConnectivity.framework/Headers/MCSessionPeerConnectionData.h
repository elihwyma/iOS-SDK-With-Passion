/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MCSessionPeerConnectionData : NSObject

{
    _Bool _hasIdentitySet;
    NSData *_gckSessionConnectionData;
    long long _encryptionPreference;
}

@property (retain, nonatomic) NSData *gckSessionConnectionData;
@property (nonatomic) long long encryptionPreference;
@property (nonatomic) _Bool hasIdentitySet;

+ (id)connectionDataSegmentWithEncryptionPreference:(long long)arg1 identitySet:(_Bool)arg2 gckSessionConnectionDataBytes:(void *)arg3 gckSessionConnectionDataLength:(unsigned long long)arg4;

- (void)dealloc;
- (_Bool)parseConnectionDataBlob:(id)arg1;
- (void)parseConnectionDataSegmentWithBytes:(char *)arg1 withLength:(unsigned long long)arg2;
- (id)initWithConnectionDataBlob:(id)arg1;

@end
