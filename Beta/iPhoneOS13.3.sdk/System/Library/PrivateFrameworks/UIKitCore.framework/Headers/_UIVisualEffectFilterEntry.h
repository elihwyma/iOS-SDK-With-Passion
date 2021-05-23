/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAFilter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectFilterEntry : NSObject

{
    CAFilter *_filter;
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_requestedValues;
    NSDictionary *_identityValues;
    double _requestedScaleHint;
    double _identityScaleHint;
    NSString *_filterName;
}

@property (copy, nonatomic) NSString *filterType;
@property (copy, nonatomic) NSDictionary *configurationValues;
@property (copy, nonatomic) NSDictionary *requestedValues;
@property (copy, nonatomic) NSDictionary *identityValues;
@property (nonatomic) double requestedScaleHint;
@property (nonatomic) double identityScaleHint;
@property (nonatomic, readonly) CAFilter *filter;
@property (copy, nonatomic, readonly) NSString *filterName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilterType:(id)arg1 configurationValues:(id)arg2 requestedValues:(id)arg3 identityValues:(id)arg4;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)convertToIdentity;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (id)valueAsRequested:(_Bool)arg1;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (double)scaleHintAsRequested:(_Bool)arg1;
- (void)forceUniqueName;

@end
