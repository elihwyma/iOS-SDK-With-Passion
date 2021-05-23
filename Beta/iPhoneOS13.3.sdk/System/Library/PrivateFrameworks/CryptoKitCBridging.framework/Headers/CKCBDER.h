/*
 Image: /System/Library/PrivateFrameworks/CryptoKitCBridging.framework/CryptoKitCBridging
 */

#import <Foundation/NSObject.h>

@interface CKCBDER : NSObject

+ (id)derRepresentationFromR:(id)arg1 s:(id)arg2 forCurve:(struct ccec_cp *)arg3;
+ (_Bool)parseDERRepresentation:(id)arg1 r:(id)arg2 s:(id)arg3 forCurve:(struct ccec_cp *)arg4;

@end
