/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDQuickLinkItem, NSString;

@interface GEOQuickLink : NSObject

{
    GEOPDQuickLinkItem *_quickLinkItem;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) NSString *appAdamID;

- (id)initWithQuickLink:(id)arg1;

@end
