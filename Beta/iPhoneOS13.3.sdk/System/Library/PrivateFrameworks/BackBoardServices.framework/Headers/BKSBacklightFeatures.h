/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BKSBacklightFeatures : NSObject

{
    _Bool _disableFeatures;
    float _fixedBrightnessNitsWhileDisabled;
    float _fixedBrightnessLevelWhileDisabled;
}

@property (nonatomic) _Bool disableFeatures;
@property (nonatomic) float fixedBrightnessNitsWhileDisabled;
@property (nonatomic) float fixedBrightnessLevelWhileDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)protobufSchema;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)didFinishProtobufDecodingWithError:(out id *)arg1;

@end
