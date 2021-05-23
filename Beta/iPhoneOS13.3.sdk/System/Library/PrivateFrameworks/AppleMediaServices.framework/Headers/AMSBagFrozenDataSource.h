/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBagKeySet, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSource : NSObject

{
    NSDate *_expirationDate;
    NSString *_profile;
    NSString *_profileVersion;
    AMSBagKeySet *_bagKeySet;
    NSArray *_cookies;
    NSDictionary *_data;
}

@property (nonatomic, readonly) AMSBagKeySet *bagKeySet;
@property (nonatomic, readonly) NSArray *cookies;
@property (nonatomic, readonly) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;
@property (copy, nonatomic, readonly) NSString *profile;
@property (copy, nonatomic, readonly) NSString *profileVersion;
@property (copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;

- (id)bagKeyInfoForKey:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6;

@end
