/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDate, NSString, NSTimeZone;

@interface BWPhotoDescriptor : NSObject

{
    NSString *_photoIdentifier;
    unsigned int _processingFlags;
    NSDate *_time;
    _Bool _timeHasBeenSet;
    NSTimeZone *_timeZone;
    _Bool _timeZoneHasBeenSet;
    CDStruct_1b6d18a9 _presentationTimeStamp;
    _Bool _presentationTimeStampHasBeenSet;
}

@property (nonatomic, readonly) NSString *photoIdentifier;
@property (nonatomic, readonly) unsigned int processingFlags;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) CDStruct_1b6d18a9 presentationTimeStamp;

- (void)dealloc;
- (id)description;
- (id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned int)arg2;
- (id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned int)arg2 time:(id)arg3 timeZone:(id)arg4 presentationTimeStamp:(CDStruct_1b6d18a9)arg5;

@end
