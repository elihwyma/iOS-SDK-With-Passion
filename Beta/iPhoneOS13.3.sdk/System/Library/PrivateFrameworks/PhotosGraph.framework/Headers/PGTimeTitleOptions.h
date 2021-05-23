/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSSet;

@interface PGTimeTitleOptions : NSObject

{
    _Bool _filterDates;
    NSSet *_eventNodes;
    NSSet *_locationNodes;
    unsigned long long _allowedFormats;
    NSLocale *_locale;
}

@property (retain, nonatomic) NSSet *eventNodes;
@property (retain, nonatomic) NSSet *locationNodes;
@property (nonatomic) unsigned long long allowedFormats;
@property (nonatomic) _Bool filterDates;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;

@end
