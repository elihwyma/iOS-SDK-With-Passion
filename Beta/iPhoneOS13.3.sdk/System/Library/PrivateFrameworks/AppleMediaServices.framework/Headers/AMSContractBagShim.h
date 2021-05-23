/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AMSContractBagShim : NSObject

{
    NSObject *_bagContract;
}

@property (retain, nonatomic) NSObject *bagContract;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *profile;
@property (copy, nonatomic, readonly) NSString *profileVersion;

+ (id)_callSelector:(SEL)arg1 onBagContract:(id)arg2;

- (id)boolForKey:(id)arg1;
- (_Bool)isLoaded;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2;
- (SEL)_selectorForBagKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBagContract:(id)arg1;

@end
