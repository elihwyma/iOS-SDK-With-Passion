/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBUIBannerItem.h>

@class NSArray, NSDate, NSHashTable, NSMutableSet, NSString, NSTimeZone;

@protocol SBStarkNotificationsConfiguring;

@interface SBStarkBannerItem : SBUIBannerItem

{
    id <SBStarkNotificationsConfiguring> _configuration;
    NSHashTable *_observers;
    NSMutableSet *_displayReasons;
}

@property (nonatomic, readonly) id <SBStarkNotificationsConfiguring> configuration;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subTitle;
@property (copy, nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSArray *iconImages;
@property (nonatomic, readonly) long long defaultActionType;
@property (nonatomic, readonly) long long effectiveDefaultActionType;
@property (nonatomic, readonly) NSDate *sourceDate;
@property (nonatomic, readonly, getter=isSourceDateAllDay) _Bool sourceDateAllDay;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (copy, nonatomic, readonly) NSArray *subActionLabels;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)shouldShowModalSubActions;
- (void)reloadDisplayProperties;
- (_Bool)matchesContext:(id)arg1;
- (_Bool)isStarkBannerItem;
- (void)_callOrFaceTimeStateChanged;
- (_Bool)_inCallOrFaceTime;
- (CDUnknownBlockType)ignoreAction;

@end
