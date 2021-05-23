/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILabel.h>

@class NSDate, NSString, NSTimer;

@protocol VUIRentalExpirationLabelDelegate;

__attribute__((visibility("hidden")))
@interface VUIRentalExpirationLabel : VUILabel

{
    NSDate *_expirationDate;
    id <VUIRentalExpirationLabelDelegate> _delegate;
    NSString *_formatString;
    NSTimer *_expiryUpdateTimer;
}

@property (copy, nonatomic) NSString *formatString;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (copy, nonatomic) NSDate *expirationDate;
@property (weak, nonatomic) id <VUIRentalExpirationLabelDelegate> delegate;

+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 formatString:(id)arg4;
+ (id)_calculateExpirationStringForDate:(id)arg1 displayWarningColor:(_Bool *)arg2 updateInterval:(long long *)arg3 formatString:(id)arg4;
+ (id)calculateExpirationStringForDate:(id)arg1 updateInterval:(long long *)arg2 formatString:(id)arg3;

- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (void)invalidateTimer;
- (void)_computeExpirationLabel:(id)arg1;

@end
