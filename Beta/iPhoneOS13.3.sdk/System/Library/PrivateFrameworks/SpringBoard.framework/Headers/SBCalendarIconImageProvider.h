/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBDateTimeController;

@protocol SBCalendarIconImageProviderDelegate;

@interface SBCalendarIconImageProvider : NSObject

{
    id <SBCalendarIconImageProviderDelegate> _delegate;
    SBDateTimeController *_dateTimeController;
}

@property (weak, nonatomic) id <SBCalendarIconImageProviderDelegate> delegate;
@property (nonatomic, readonly) SBDateTimeController *dateTimeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)localeChanged;
- (id)iconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)reloadIconImage;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (id)initWithDateTimeController:(id)arg1;
- (void)_startListeningForSignificantTimeChanges;
- (void)_stopListeningForSignificantTimeChanges;
- (id)preparedISIcon;

@end
