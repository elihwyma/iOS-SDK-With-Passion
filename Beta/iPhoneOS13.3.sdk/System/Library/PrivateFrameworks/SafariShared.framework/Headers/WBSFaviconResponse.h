/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSSiteMetadataResponse.h>

@class NSString, UIColor, UIImage;

@interface WBSFaviconResponse : WBSSiteMetadataResponse

{
    UIImage *_favicon;
    unsigned long long _faviconType;
}

@property (nonatomic, readonly) UIImage *favicon;
@property (nonatomic, readonly) unsigned long long faviconType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly, getter=isGenerated) _Bool generated;
@property (nonatomic, readonly) UIColor *extractedBackgroundColor;

- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3;

@end
