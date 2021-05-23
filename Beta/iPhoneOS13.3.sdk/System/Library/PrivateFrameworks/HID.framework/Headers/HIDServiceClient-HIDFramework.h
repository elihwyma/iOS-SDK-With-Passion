/*
 Image: /System/Library/PrivateFrameworks/HID.framework/HID
 */

#import <IOKit/HIDServiceClient.h>

@interface HIDServiceClient (HIDFramework)

@property (readonly) unsigned long long serviceID;

- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;
- (id)eventMatching:(id)arg1;
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;
- (id)propertiesForKeys:(id)arg1;

@end
