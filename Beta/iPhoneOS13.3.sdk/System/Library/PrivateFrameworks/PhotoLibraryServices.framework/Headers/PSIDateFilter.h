/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString, PSIDate;

@interface PSIDateFilter : NSObject <Swift>

{
    PSIDate *_singleDate;
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_displayString;
}

@property (readonly) PSIDate *singleDate;
@property (readonly) PSIDate *startDate;
@property (readonly) PSIDate *endDate;
@property (copy, nonatomic) NSString *displayString;
@property (readonly) long long int64RepresentationMask;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithSingleDateComponents:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1;
- (id)initWithEndDateComponents:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (id)initWithSingleDate:(id)arg1;

@end
