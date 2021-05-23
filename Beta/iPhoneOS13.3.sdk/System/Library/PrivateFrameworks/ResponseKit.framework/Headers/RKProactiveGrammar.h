/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKProactiveGrammar : NSObject

+ (id)sharedManager;
+ (id)getOTAPathForRKBundle:(id)arg1;
+ (id)getEntities:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyAttributedTokenForText:(id)arg1 forLanguage:(id)arg2;
- (void *)getLanguageModel:(id)arg1;
- (id)getEquivalenceClass:(id)arg1;
- (id)copyAttributedTokenForText:(id)arg1 forLanguageModel:(void *)arg2 withLanguageCode:(id)arg3;
- (void *)chineseTokenizer;

@end
