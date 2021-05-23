/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface APUIActionCardViewConfig : NSObject

{
    _Bool _showThumbnailImage;
    _Bool _useAppIconAsThumbnail;
    _Bool _showActionButton;
    _Bool _showAppFootnote;
    _Bool _useTinyIconVariant;
    _Bool _fallbackToCustomResponseString;
    unsigned long long _style;
    NSString *_bundleId;
    long long _maxLinesForTitle;
    long long _maxLinesForSubtitle;
    long long _maxLinesForFootnote;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) _Bool showThumbnailImage;
@property (nonatomic) _Bool useAppIconAsThumbnail;
@property (nonatomic) _Bool showActionButton;
@property (nonatomic) _Bool showAppFootnote;
@property (nonatomic) _Bool useTinyIconVariant;
@property (nonatomic) long long maxLinesForTitle;
@property (nonatomic) long long maxLinesForSubtitle;
@property (nonatomic) long long maxLinesForFootnote;
@property (nonatomic) _Bool fallbackToCustomResponseString;

- (id)init;

@end
