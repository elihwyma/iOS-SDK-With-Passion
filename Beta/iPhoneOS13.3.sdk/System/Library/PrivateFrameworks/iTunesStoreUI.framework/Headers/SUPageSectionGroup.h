/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject

{
    long long _defaultSectionIndex;
    NSArray *_sections;
    long long _style;
    UIColor *_tintColor;
    long long _tintStyle;
}

@property (nonatomic) long long defaultSectionIndex;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long tintStyle;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadFromDictionary:(id)arg1;
- (id)initWithSectionsDictionary:(id)arg1;
- (long long)_sectionStyleForString:(id)arg1;

@end
