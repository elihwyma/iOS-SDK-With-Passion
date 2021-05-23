/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject

{
    ISUDownload *_download;
}

@property (readonly) NSNumber *adamID;
@property (readonly) NSString *phase;
@property (readonly) float progress;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)phaseStringForDownload:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithISUDownload:(id)arg1;
- (id)initWithSSDownload:(id)arg1;

@end
