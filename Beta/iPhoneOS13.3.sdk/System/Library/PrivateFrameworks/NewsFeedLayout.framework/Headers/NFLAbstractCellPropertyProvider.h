/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLFontCache, NFUnfairLock, NSString;

@interface NFLAbstractCellPropertyProvider : NSObject

{
    id *_propertiesByColumnSpan;
    double _scaleValue;
    NFLFontCache *_fontCache;
    Class _propertyClass;
    NSString *_plistName;
    unsigned long long _propertiesByColumnSpanSize;
    NFUnfairLock *_propertiesLock;
}

@property (nonatomic) Class propertyClass;
@property (retain, nonatomic) NSString *plistName;
@property (nonatomic) unsigned long long propertiesByColumnSpanSize;
@property (retain, nonatomic) NFUnfairLock *propertiesLock;
@property (nonatomic, readonly) double scaleValue;
@property (nonatomic, readonly) NFLFontCache *fontCache;

+ (id)plistProvider;
+ (id)publisherTitleFontLarge;
+ (id)publisherTitleFontSmall;

- (id)init;
- (void)dealloc;
- (void)_loadIfNeeded;
- (id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5;
- (id)propertiesForColumnSpan:(long long)arg1;

@end
