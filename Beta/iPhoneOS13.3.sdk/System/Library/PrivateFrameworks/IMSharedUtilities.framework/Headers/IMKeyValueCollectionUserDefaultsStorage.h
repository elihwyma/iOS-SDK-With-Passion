/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMKeyValueCollectionUserDefaultsStorage : NSObject

{
    NSString *_domain;
}

@property (copy, nonatomic, readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)_actuallyReadObjectForKey:(id)arg1;
- (id)setWithMutableClassIfApplicableFor:(Class)arg1;
- (id)_decodeData:(id)arg1 forKey:(id)arg2;
- (void)_actuallyWriteObject:(id)arg1 forKey:(id)arg2;

@end
