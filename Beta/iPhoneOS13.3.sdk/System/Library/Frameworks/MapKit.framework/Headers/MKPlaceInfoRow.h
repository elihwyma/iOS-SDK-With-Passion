/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKPlaceSectionRowView;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoRow : NSObject

{
    _Bool _enable;
    _Bool _showIcon;
    unsigned long long _type;
    MKPlaceSectionRowView *_rowView;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) MKPlaceSectionRowView *rowView;
@property (nonatomic) _Bool enable;
@property (nonatomic) _Bool showIcon;

+ (id)infoRow:(id)arg1 ofType:(unsigned long long)arg2;

@end
