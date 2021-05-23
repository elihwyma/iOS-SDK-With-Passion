/*
 Image: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
 */

@interface IOUSBHostDevice

@property (readonly) const struct IOUSBDeviceDescriptor *deviceDescriptor;
@property (readonly) const struct IOUSBBOSDescriptor *capabilityDescriptors;
@property (readonly) const struct IOUSBConfigurationDescriptor *configurationDescriptor;

+ (struct __CFDictionary *)createMatchingDictionaryWithVendorID:(id)arg1 productID:(id)arg2 bcdDevice:(id)arg3 deviceClass:(id)arg4 deviceSubclass:(id)arg5 deviceProtocol:(id)arg6 speed:(id)arg7 productIDArray:(id)arg8;

- (_Bool)resetWithError:(id *)arg1;
- (_Bool)configureWithValue:(unsigned long long)arg1 matchInterfaces:(_Bool)arg2 error:(id *)arg3;
- (const struct IOUSBConfigurationDescriptor *)configurationDescriptorWithIndex:(unsigned long long)arg1 error:(id *)arg2;
- (const struct IOUSBConfigurationDescriptor *)configurationDescriptorWithConfigurationValue:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)configureWithValue:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)allocateDownstreamBusCurrentWithWakeUnits:(unsigned long long *)arg1 sleepUnits:(unsigned long long *)arg2 error:(id *)arg3;

@end
