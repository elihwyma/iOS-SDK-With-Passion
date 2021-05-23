/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIFontDescriptor;

@interface ICFontCacheKey : NSObject

{
    int _traits;
    NSString *_fontName;
    double _pointSize;
    UIFontDescriptor *_fontDescriptor;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) int traits;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) UIFontDescriptor *fontDescriptor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(struct UIFont *)arg1;

@end
