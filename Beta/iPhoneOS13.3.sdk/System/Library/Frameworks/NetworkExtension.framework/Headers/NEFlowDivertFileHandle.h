/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFileHandle.h>

@class NSData, NSNumber;

@interface NEFlowDivertFileHandle : NEFileHandle

{
    NSNumber *_controlUnit;
    NSData *_keyMaterial;
}

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)description;
- (unsigned long long)type;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initFlowDivertControlSocketDisableAppMap:(_Bool)arg1;
- (id)getUnitForSocket:(int)arg1;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertDataSocket;

@end
