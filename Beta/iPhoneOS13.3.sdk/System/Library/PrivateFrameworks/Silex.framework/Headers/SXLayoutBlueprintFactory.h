/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;

@interface SXLayoutBlueprintFactory : NSObject

{
    id <SXComponentBlueprintFactory> _componentBlueprintFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) id <SXComponentBlueprintFactory> componentBlueprintFactory;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createLayoutBlueprintWithLayoutOptions:(id)arg1;
- (id)initWithComponentBlueprintFactory:(id)arg1 unitConverterFactory:(id)arg2;

@end
