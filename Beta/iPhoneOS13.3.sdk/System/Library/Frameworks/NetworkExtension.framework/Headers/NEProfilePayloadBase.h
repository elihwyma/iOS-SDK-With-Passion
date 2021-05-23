/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject

{
    NSDictionary *_payloadAtom;
    NSMutableDictionary *_pendingCertificates;
    NSDictionary *_pluginUpgradeInfo;
}

@property (retain, nonatomic) NSDictionary *payloadAtom;
@property (retain) NSMutableDictionary *pendingCertificates;
@property (retain) NSDictionary *pluginUpgradeInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPayload:(id)arg1;
- (id)validatePayload;
- (_Bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3;
- (_Bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2;
- (id)getPreprocessedPayloadContents;
- (_Bool)setPostprocessedPayloadContents:(id)arg1;

@end
