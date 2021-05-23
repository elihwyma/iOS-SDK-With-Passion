/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface NSHTTPURLRequestParameters : NSObject

{
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    unsigned long long pageNotFoundCacheLifetime;
    _Bool shouldHandleCookies;
    _Bool _pad1;
    _Bool _pad2;
    _Bool _pad3;
}

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
