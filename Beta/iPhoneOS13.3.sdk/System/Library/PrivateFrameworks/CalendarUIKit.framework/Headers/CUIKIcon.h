/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <ISIcon.h>

@class NSCalendar, NSDate;

@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon

{
    NSDate *_date;
    NSCalendar *_calendar;
    long long _format;
    id <CUIKIconGenerator> _iconGenerator;
    ISIcon *_isIcon;
}

@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) id <CUIKIconGenerator> iconGenerator;
@property (retain, nonatomic) ISIcon *isIcon;

- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
