/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString;

@interface IDSCarrierToken : NSObject

{
    NSString *_tokenString;
}

@property (nonatomic, readonly) NSString *tokenString;

- (id)initWithTokenString:(id)arg1;

@end
