/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICAppearanceInfo, NSString, UIColor;

@interface ICLetterpressImageCacheKey : NSObject

{
    double _scale;
    UIColor *_tintColor;
    NSString *_name;
    unsigned long long _version;
    ICAppearanceInfo *_appearanceInfo;
}

@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) ICAppearanceInfo *appearanceInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5;

@end
