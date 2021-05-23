/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXUnitConverterFactory;

@interface SXLayoutFinalizationProcessor : NSObject

{
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (void)finalizeLayoutBlueprint:(id)arg1 origin:(struct CGPoint)arg2 absoluteOrigin:(struct CGPoint)arg3;
- (id)initWithUnitConverterFactory:(id)arg1;

@end
