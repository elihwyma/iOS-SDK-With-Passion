/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStateDumpBuilderContext.h>

@class NSDictionary, NSSet;

@interface HFMutableStateDumpBuilderContext : HFStateDumpBuilderContext

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) unsigned long long outputStyle;
@property (copy, nonatomic) NSSet *objectsToExclude;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) _Bool excludePrimaryID;

@end
