/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPUDataSourceConfiguration : NSObject

{
    Class _dataSourceClass;
    NSString *_dataSourceCachingKey;
    CDUnknownBlockType _defaultQueryCreationBlock;
    long long _entityType;
}

@property (nonatomic, readonly) Class dataSourceClass;
@property (copy, nonatomic) NSString *dataSourceCachingKey;
@property (copy, nonatomic) CDUnknownBlockType defaultQueryCreationBlock;
@property (nonatomic) long long entityType;

+ (id)configurationWithDataSourceClass:(Class)arg1;

- (id)initWithDataSourceClass:(Class)arg1;

@end
