/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLocale, NSString, NSURL;

@interface SWConfiguration : NSObject

{
    NSString *_identifier;
    NSString *_storeFront;
    NSLocale *_locale;
    NSString *_contentSizeCategory;
    NSDictionary *_dataSources;
    NSURL *_location;
    struct CGSize _canvasSize;
    struct CGRect _contentFrame;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *storeFront;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) struct CGSize canvasSize;
@property (nonatomic) struct CGRect contentFrame;
@property (copy, nonatomic) NSDictionary *dataSources;
@property (copy, nonatomic) NSURL *location;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentSizeCategory:(id)arg3 canvasSize:(struct CGSize)arg4 contentFrame:(struct CGRect)arg5 dataSources:(id)arg6 location:(id)arg7;

@end
