/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXActionEngine : NSObject

{
    NSMutableDictionary *_additionFactories;
    NSMutableDictionary *_hostNameFactories;
}

@property (nonatomic, readonly) NSMutableDictionary *additionFactories;
@property (nonatomic, readonly) NSMutableDictionary *hostNameFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;
- (void)registerFactory:(id)arg1 additionType:(Class)arg2;
- (void)registerFactory:(id)arg1 URLHost:(id)arg2;

@end
