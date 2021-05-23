/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface _MKLineHeaderModel : NSObject

{
    NSMutableArray *_tokens;
    _Bool _shouldUseEmptyPlaceholder;
    UIView *_ownerView;
    NSDictionary *_fontAttribute;
    CDUnknownBlockType _colorProvider;
}

@property (weak, nonatomic) UIView *ownerView;
@property (copy, nonatomic) NSDictionary *fontAttribute;
@property (copy, nonatomic) CDUnknownBlockType colorProvider;
@property (nonatomic) _Bool shouldUseEmptyPlaceholder;

- (id)init;
- (id)description;
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addToken:(id)arg1;
- (void)removeToken:(id)arg1;
- (id)contentAttributedString;
- (id)_placeCardHeaderSeparatorString;

@end
