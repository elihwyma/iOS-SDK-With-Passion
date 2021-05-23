/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface FTServerBag : NSObject

{
    long long _type;
}

@property (readonly) NSURL *bagURL;
@property (readonly) NSString *apsEnvironmentName;
@property (readonly) _Bool allowSelfSignedCertificates;
@property (readonly) _Bool allowUnsignedBags;
@property (readonly) _Bool isLoaded;
@property (readonly) _Bool isLoading;
@property (readonly) _Bool isInDebilitatedMode;
@property (readonly) _Bool isServerAvailable;

+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForType:(long long)arg1;

- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)startBagLoad;
- (id)_bag;
- (id)_cachedBag;
- (void)forceBagLoad;
- (id)urlWithKey:(id)arg1;
- (id)initWithBagType:(long long)arg1;

@end
