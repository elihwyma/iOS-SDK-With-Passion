/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFStateDumpBuilderContext : NSObject <Swift>

{
    _Bool _excludePrimaryID;
    unsigned long long _detailLevel;
    unsigned long long _outputStyle;
    NSSet *_objectsToExclude;
    NSDictionary *_userInfo;
    NSString *_multilinePrefix;
}

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) unsigned long long outputStyle;
@property (copy, nonatomic) NSSet *objectsToExclude;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *multilinePrefix;
@property (nonatomic) _Bool excludePrimaryID;

+ (id)contextWithDetailLevel:(unsigned long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1;
- (id)copyWithDetailLevel:(unsigned long long)arg1;
- (id)copyWithOutputStyle:(unsigned long long)arg1;
- (unsigned long long)derivedOutputStyle;
- (id)initWithDetailLevel:(unsigned long long)arg1;

@end
