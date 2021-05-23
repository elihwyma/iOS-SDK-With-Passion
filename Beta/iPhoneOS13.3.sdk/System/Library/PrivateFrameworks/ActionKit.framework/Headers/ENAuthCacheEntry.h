/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class EDAMAuthenticationResult, NSDate;

@interface ENAuthCacheEntry : NSObject

{
    EDAMAuthenticationResult *_authResult;
    NSDate *_cachedDate;
}

@property (retain, nonatomic) EDAMAuthenticationResult *authResult;
@property (retain, nonatomic) NSDate *cachedDate;

+ (id)entryWithResult:(id)arg1;

- (_Bool)isValid;

@end
