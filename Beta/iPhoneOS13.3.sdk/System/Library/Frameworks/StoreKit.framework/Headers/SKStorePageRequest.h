/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject

{
    long long _pageStyle;
    NSDictionary *_productParameters;
    NSURL *_productURL;
}

@property (nonatomic) long long productPageStyle;
@property (copy, nonatomic) NSDictionary *productParameters;
@property (copy, nonatomic) NSURL *productURL;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
