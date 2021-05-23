/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol REElementDataSourceProperties <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSDictionary *dataSourceProperties;

@end
