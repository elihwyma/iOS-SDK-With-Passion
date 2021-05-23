/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject

{
    NSRegularExpression *_bagKeyPattern;
    long long _cornerRadius;
    _Bool _shouldShowNavigationBar;
    struct CGSize _size;
    NSString *_transitionName;
    NSRegularExpression *_urlPattern;
}

@property (nonatomic, readonly) long long cornerRadius;
@property (nonatomic, readonly) _Bool shouldShowNavigationBar;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) NSString *transitionName;

- (id)init;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (_Bool)matchesURL:(id)arg1;
- (_Bool)matchesURLBagKey:(id)arg1;

@end
