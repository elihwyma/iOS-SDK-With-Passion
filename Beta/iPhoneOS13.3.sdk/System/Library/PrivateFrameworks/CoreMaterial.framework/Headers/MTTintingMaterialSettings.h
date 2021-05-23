/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject

{
    NSDictionary *_tintColorDescription;
    struct CGColor *_tintColor;
    double _tintAlpha;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *tintColorDescription;
@property (nonatomic, readonly) struct CGColor *tintColor;
@property (nonatomic, readonly) double tintAlpha;

- (void)dealloc;
- (void)_processTintingDescription:(id)arg1 defaultingToIdentity:(_Bool)arg2;
- (id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2;

@end
