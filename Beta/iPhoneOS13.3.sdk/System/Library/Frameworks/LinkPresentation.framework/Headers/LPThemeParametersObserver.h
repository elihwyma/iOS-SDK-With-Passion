/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPThemeParametersObserver : NSObject

{
    NSHashTable *_clients;
}

+ (id)shared;

- (id)init;
- (void)dealloc;
- (void)addClient:(id)arg1;
- (void)didChangeContentSizeCategory:(id)arg1;
- (void)didChangeDarkenColorsStatus:(id)arg1;
- (void)didChangeThemeParameters;

@end
