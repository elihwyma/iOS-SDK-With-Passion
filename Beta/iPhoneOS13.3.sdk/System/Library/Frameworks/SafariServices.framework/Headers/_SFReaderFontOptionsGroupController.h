/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, SFReaderContext;

__attribute__((visibility("hidden")))
@interface _SFReaderFontOptionsGroupController : NSObject

{
    double _fontSize;
    NSMutableDictionary *_fontToItemDictionary;
    NSObject<OS_dispatch_queue> *_fontInstallationStatusQueue;
    id <SFReaderContext> _readerContext;
}

@property (nonatomic, readonly) id <SFReaderContext> readerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *values;

- (void)_fontDownloadDidBegin:(id)arg1;
- (void)_fontDownloadDidFail:(id)arg1;
- (void)_fontDownloadDidFinish:(id)arg1;
- (void)_fontDownloadProgressDidChange:(id)arg1;
- (_Bool)_fontIsImmediatelyAvailable:(id)arg1;
- (id)_attributedStringForReaderFont:(id)arg1;
- (id)_fontForFontNotification:(id)arg1;
- (id)_itemForNotification:(id)arg1;
- (id)_downloadAccessoryForNotification:(id)arg1;
- (void)prepareItem:(id)arg1 forValue:(id)arg2;
- (void)setSelectedValue:(id)arg1;
- (id)attributedStringForValue:(id)arg1;
- (id)textStyleForValue:(id)arg1;
- (_Bool)isSelectedValue:(id)arg1;
- (id)initWithReaderContext:(id)arg1;

@end
