/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject

{
    NSArray *_renditions;
    NSString *_name;
    unsigned long long _index;
}

@property (retain, nonatomic) NSArray *renditions;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long index;

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

- (void)dealloc;
- (void)calculateColumLefts:(id *)arg1 rowTops:(id *)arg2 totalSize:(struct CGSize *)arg3 forPartFeatures:(unsigned long long)arg4;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id *)arg2;

@end
