/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;

@interface SXLayouterFactory : NSObject

{
    id <SXColumnCalculator> _columnCalculator;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) id <SXColumnCalculator> columnCalculator;
@property (nonatomic, readonly) id <SXLayoutContextFactory> layoutContextFactory;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)layouterForContainerComponentBlueprint:(id)arg1 delegate:(id)arg2;
- (id)initWithColumnCalculator:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;
- (id)createColumnLayouterWithDelegate:(id)arg1;

@end
