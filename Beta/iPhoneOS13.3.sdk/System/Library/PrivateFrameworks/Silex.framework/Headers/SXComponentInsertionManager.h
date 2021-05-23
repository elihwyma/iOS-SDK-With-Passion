/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SXBlueprintAnalyzer, SXComponentInserterManager, SXComponentInsertionConditionEngine, SXUnitConverterFactory;

@interface SXComponentInsertionManager : NSObject

{
    id <SXComponentInsertionConditionEngine> _conditionEngine;
    id <SXComponentInserterManager> _inserterManager;
    id <SXBlueprintAnalyzer> _blueprintAnalyzer;
    id <SXUnitConverterFactory> _unitConverterFactory;
    NSMutableArray *_cache;
}

@property (nonatomic, readonly) id <SXComponentInserterManager> inserterManager;
@property (nonatomic, readonly) id <SXComponentInsertionConditionEngine> conditionEngine;
@property (nonatomic, readonly) id <SXBlueprintAnalyzer> blueprintAnalyzer;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (nonatomic, readonly) NSMutableArray *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)insertComponentsForBlueprint:(id)arg1 DOMObjectProvider:(id)arg2;
- (id)initWithComponentInserterManager:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3 unitConverterFactory:(id)arg4;
- (id)insertForMarker:(id)arg1 inserter:(id)arg2 DOMObjectProvider:(id)arg3 layoutProvider:(id)arg4;
- (void)updateDOM:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4;

@end
