/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, NSSet;

@protocol REDataSourceManagerProperties <Swift>

@property (nonatomic, readonly) NSSet *disabledDataSources;
@property (readonly) NSSet *availableDataSourceIdentifiers;
@property (readonly) NSSet *currentDataSourceIdentifiers;
@property (readonly) NSArray *currentDataSources;
@property (nonatomic, readonly) NSArray *dataSourceControllers;

@end
