/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject

{
    _Bool _shouldSignBody;
    NSArray *_fields;
    NSArray *_headers;
}

@property (nonatomic) _Bool shouldSignBody;
@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *headers;

- (id)description;

@end
