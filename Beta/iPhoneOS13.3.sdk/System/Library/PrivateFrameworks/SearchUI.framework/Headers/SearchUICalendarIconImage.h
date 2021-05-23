/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAppIconImage.h>

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

{
    NSDate *_date;
}

@property (retain, nonatomic) NSDate *date;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)loadImage;
- (id)initWithDate:(id)arg1 variant:(unsigned long long)arg2;

@end
