/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <SilexWeb/SWConfiguration.h>

@class NSDictionary, NSLocale, NSString, NSURL;

@interface SWMutableConfiguration : SWConfiguration

{
    NSString *storeFront;
    NSLocale *locale;
    NSString *contentSizeCategory;
    NSDictionary *dataSources;
    NSURL *location;
    struct CGSize canvasSize;
    struct CGRect contentFrame;
}

@property (copy, nonatomic) NSString *storeFront;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) struct CGSize canvasSize;
@property (nonatomic) struct CGRect contentFrame;
@property (copy, nonatomic) NSDictionary *dataSources;
@property (copy, nonatomic) NSURL *location;

@end
