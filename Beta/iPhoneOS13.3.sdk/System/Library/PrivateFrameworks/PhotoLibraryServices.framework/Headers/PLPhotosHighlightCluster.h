/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet, NSString, PLDateRangeTitleGenerator;

@protocol NSCopying;

@interface PLPhotosHighlightCluster : NSObject

{
    _Bool _isCurated;
    unsigned short _type;
    unsigned short _category;
    unsigned short _kind;
    int _startTimeZoneOffset;
    int _endTimeZoneOffset;
    NSSet *_moments;
    NSSet *_assets;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_title;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
    NSObject<NSCopying> *_objectID;
}

@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) _Bool isCurated;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short category;
@property (nonatomic) unsigned short kind;
@property (nonatomic, readonly) NSSet *moments;
@property (nonatomic, readonly) NSObject<NSCopying> *objectID;

- (void)setMoments:(id)arg1;
- (id)initWithMoments:(id)arg1 dateRangeTitleGenerator:(id)arg2;
- (void)_calculatePropertyValues;

@end
