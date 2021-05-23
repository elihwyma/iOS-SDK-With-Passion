/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <Swift>

{
    NSString *_geometryEntryPointShader;
    NSString *_surfaceEntryPointShader;
    NSString *_lightingModelEntryPointShader;
    NSString *_fragmentEntryPointShader;
}

@property (retain, nonatomic) NSString *geometryEntryPointShader;
@property (retain, nonatomic) NSString *surfaceEntryPointShader;
@property (retain, nonatomic) NSString *lightingModelEntryPointShader;
@property (retain, nonatomic) NSString *fragmentEntryPointShader;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataAccessor:(id)arg1 suffix:(id)arg2;

@end
