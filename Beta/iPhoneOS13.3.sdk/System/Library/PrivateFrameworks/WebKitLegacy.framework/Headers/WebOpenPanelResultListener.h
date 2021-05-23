/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject

{
    struct RefPtr<WebCore::FileChooser, WTF::DumbPtrTraits<WebCore::FileChooser>> _chooser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id).cxx_construct;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (id)initWithChooser:(struct FileChooser *)arg1;
- (void)chooseFilename:(id)arg1;
- (void)chooseFilenames:(id)arg1;

@end
