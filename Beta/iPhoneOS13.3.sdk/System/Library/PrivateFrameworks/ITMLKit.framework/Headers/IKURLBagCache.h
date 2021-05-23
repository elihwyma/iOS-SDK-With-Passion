/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SSURLBag;

@interface IKURLBagCache : NSObject

{
    SSURLBag *_urlBag;
    NSDictionary *_existingDictionary;
    NSString *_cachePath;
}

@property (nonatomic, readonly) SSURLBag *urlBag;
@property (nonatomic, readonly) NSDictionary *existingDictionary;
@property (nonatomic, readonly) NSString *cachePath;

+ (id)sharedCache;
+ (id)URLBagContext;

- (id)init;
- (id)valueForKey:(id)arg1;
- (void)updateWithInvalidation:(_Bool)arg1;
- (void)_loadWithNotification:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkTrustStatusForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTrustedURL:(id)arg1;

@end
