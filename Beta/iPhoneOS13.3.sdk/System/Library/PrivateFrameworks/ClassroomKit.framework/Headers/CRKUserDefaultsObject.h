/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKKeyObjectStoring;

@interface CRKUserDefaultsObject : NSObject

{
    NSString *_key;
    NSObject<CRKKeyObjectStoring> *_store;
}

@property (nonatomic, readonly) NSObject<CRKKeyObjectStoring> *store;
@property (copy, nonatomic, readonly) NSString *key;
@property (copy) id value;

- (id)initWithKey:(id)arg1;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;
- (id)initWithStore:(id)arg1 key:(id)arg2;
- (void)registerDefaultValue:(id)arg1;

@end
