/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface SSPlistDataReader : NSObject

{
    struct _MDPlistContainer *_container;
    CDStruct_b7fac349 _obj;
}

@property (nonatomic, readonly) unsigned long long count;
@property (copy, nonatomic, readonly) NSMutableArray *allKeys;
@property (nonatomic, readonly) NSArray *blacklist;

- (void)dealloc;
- (id)description;
- (struct _MDPlistContainer *)container;
- (id)initWithPlistContainer:(struct _MDPlistContainer *)arg1 obj:(CDStruct_b7fac349)arg2;
- (double)doubleValueForKey:(const char *)arg1;
- (id)initWithPlistContainer:(struct _MDPlistContainer *)arg1;
- (_Bool)doesBundleExistInAppWhiteList:(id)arg1;
- (double)doubleValueForBundle:(id)arg1;

@end
