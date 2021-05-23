/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <Swift>

{
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSString *_nickname;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) float rating;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) NSURL *submitURL;
@property (nonatomic, readonly) unsigned long long bodyMaxLength;
@property (nonatomic, readonly) unsigned long long nicknameMaxLength;
@property (nonatomic, readonly) unsigned long long titleMaxLength;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReviewDictionary:(id)arg1;

@end
