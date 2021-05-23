/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSAMSBagInterface : IKJSObject

@property (nonatomic, readonly) NSDictionary *VUIAMSBagValueTypes;

+ (id)generateResponseDictionary:(id)arg1 withError:(id)arg2;
+ (id)convertNSErrorIntoDict:(id)arg1;

- (id)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (void)registerBagKey:(id)arg1 withValueType:(unsigned long long)arg2;
- (void)arrayForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)boolForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)doubleForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)integerForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)stringForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)URLForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)dictionaryForKeyWithCompletion:(id)arg1:(id)arg2;

@end
