/*
 Image: /System/Library/PrivateFrameworks/HID.framework/HID
 */

#import <IOKit/HIDDevice.h>

@interface HIDDevice (HIDFramework)

@property (readonly) unsigned int service;

- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)cancel;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (void)activate;
- (id)initWithService:(unsigned int)arg1;
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;
- (void)setInputElementMatching:(id)arg1;
- (void)setInputElementHandler:(CDUnknownBlockType)arg1;
- (void)setInputReportHandler:(CDUnknownBlockType)arg1;
- (id)elementsMatching:(id)arg1;
- (_Bool)setReport:(const void *)arg1 reportLength:(long long)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5;
- (_Bool)getReport:(void *)arg1 reportLength:(long long *)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5;
- (_Bool)commitElements:(id)arg1 direction:(long long)arg2 error:(out id *)arg3;
- (void)setBatchInputElementHandler:(CDUnknownBlockType)arg1;
- (_Bool)openSeize:(out id *)arg1;

@end
