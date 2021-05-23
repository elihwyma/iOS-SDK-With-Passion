/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <Swift>

{
    NSNumber *_searchHintIndex;
    NSString *_searchHintOriginalTerm;
    NSString *_term;
    NSURL *_url;
}

@property (copy, nonatomic) NSNumber *searchHintIndex;
@property (copy, nonatomic) NSString *searchHintOriginalTerm;
@property (copy, nonatomic) NSString *term;
@property (copy, nonatomic) NSURL *URL;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
