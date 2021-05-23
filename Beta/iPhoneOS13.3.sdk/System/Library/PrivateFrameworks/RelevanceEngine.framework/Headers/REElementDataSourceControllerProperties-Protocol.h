/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, NSString;

@protocol REElementDataSourceControllerProperties <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) Class dataSourceClass;
@property (nonatomic, readonly) NSArray *supportedSections;
@property (nonatomic, readonly) NSArray *allProvidedElements;
@property (nonatomic, readonly) _Bool allowsLocationUse;
@property (nonatomic, readonly) _Bool hasDataAvailable;
@property (nonatomic, readonly) unsigned long long updateCount;

@end
