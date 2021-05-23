/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface _MTLSamplerState : NSObject

{
    id <MTLDevice> _device;
    NSString *_label;
    unsigned long long _resourceIndex;
}

@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *label;
@property (nonatomic) unsigned long long resourceIndex;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2;

@end
