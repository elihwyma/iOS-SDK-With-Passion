/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface _MFTableCellAttributesCache : NSObject

{
    NSCache *_attributesCache;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(CDUnknownBlockType)arg2;
- (void)_didReceiveFontSizeChangeNotification:(id)arg1;

@end
