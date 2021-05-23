/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2EAPProtocol, NSMutableData;

@interface NEIKEv2EAP : NSObject

{
    struct EAPClientPluginData_s _pluginData;
    NEIKEv2EAPProtocol *_protocol;
    struct EAPClientModule_s *_module;
}

@property (retain) NEIKEv2EAPProtocol *protocol;
@property struct EAPClientModule_s *module;
@property (readonly) NSMutableData *sessionKey;

+ (unsigned int)codeForPayload:(id)arg1;
+ (struct EAPClientModule_s *)getAKAModule;
+ (struct EAPClientModule_s *)getSIMModule;
+ (struct EAPClientModule_s *)getMSCHAPv2Module;
+ (struct EAPClientModule_s *)getGTCModule;
+ (struct EAPClientModule_s *)getTLSModule;
+ (struct EAPClientModule_s *)getPEAPModule;
+ (unsigned int)typeForPayload:(id)arg1;
+ (struct EAPClientModule_s *)loadModuleForType:(unsigned int)arg1;

- (id)init;
- (void)dealloc;
- (id)copyProperties:(unsigned int)arg1;
- (id)selectModuleForPayload:(id)arg1 ikeSA:(id)arg2;
- (id)createPayloadResponseForRequest:(id)arg1 type:(unsigned int)arg2 typeData:(id)arg3 typeString:(id)arg4;
- (id)createPayloadResponseForRequest:(id)arg1 ikeSA:(id)arg2 success:(_Bool *)arg3 reportEAPError:(_Bool *)arg4;

@end
