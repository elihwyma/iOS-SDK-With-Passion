/*
 Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLTaggerAssetRequest : NSObject

{
    NSString *_language;
    NSString *_tagScheme;
    CDUnknownBlockType _completionHandler;
}

+ (void)checkAssetRequests;

- (_Bool)isFulfilled;
- (void)completeWithResult:(long long)arg1 error:(id)arg2;
- (id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)waitForFulfillment;

@end
