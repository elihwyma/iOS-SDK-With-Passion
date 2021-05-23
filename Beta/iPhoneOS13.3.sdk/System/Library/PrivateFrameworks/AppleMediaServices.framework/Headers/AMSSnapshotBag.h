/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBagFrozenDataSource, NSDate, NSString;

@interface AMSSnapshotBag : NSObject

{
    NSDate *_creationDate;
    AMSBagFrozenDataSource *_dataSource;
}

@property (retain, nonatomic) AMSBagFrozenDataSource *dataSource;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *profile;
@property (copy, nonatomic, readonly) NSString *profileVersion;

- (id)boolForKey:(id)arg1;
- (_Bool)isLoaded;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;

@end
