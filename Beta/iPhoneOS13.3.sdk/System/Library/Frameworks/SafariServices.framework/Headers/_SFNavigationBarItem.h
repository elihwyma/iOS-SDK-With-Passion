/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, _SFFluidProgressView, _SFNavigationBar;

@interface _SFNavigationBarItem : NSObject

{
    _Bool _showsLockIcon;
    _Bool _showsSearchIndicator;
    _Bool _showsStopReloadButtons;
    _Bool _stopReloadButtonShowsStop;
    _Bool _textHasEVCertificateTint;
    _Bool _lockIconHasEVCertificateTint;
    _Bool _showsPageFormatButton;
    _Bool _readerButtonSelected;
    _Bool _showsReaderButton;
    _Bool _showsReaderAvailabilityText;
    _Bool _overrideBarStyleForSecurityWarning;
    _Bool _showsNotSecureAnnotation;
    _Bool _hasFocusedSensitiveFieldOnCurrentPage;
    NSString *_text;
    NSString *_textWhenExpanded;
    unsigned long long _startIndexOfTextInExpandedText;
    NSString *_customPlaceholderText;
    _SFFluidProgressView *_progressView;
    unsigned long long _mediaCaptureDeviceIcon;
    _SFNavigationBar *_navigationBar;
}

@property (weak, nonatomic, setter=_setNavigationBar:) _SFNavigationBar *navigationBar;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textWhenExpanded;
@property (nonatomic, readonly) unsigned long long startIndexOfTextInExpandedText;
@property (copy, nonatomic) NSString *customPlaceholderText;
@property (nonatomic) _Bool showsLockIcon;
@property (nonatomic) _Bool showsSearchIndicator;
@property (nonatomic) _Bool showsStopReloadButtons;
@property (nonatomic) _Bool stopReloadButtonShowsStop;
@property (nonatomic) _Bool textHasEVCertificateTint;
@property (nonatomic) _Bool lockIconHasEVCertificateTint;
@property (nonatomic) _Bool showsPageFormatButton;
@property (nonatomic) _Bool readerButtonSelected;
@property (nonatomic) _Bool showsReaderButton;
@property (nonatomic, readonly) _Bool showsReaderAvailabilityText;
@property (nonatomic) _Bool overrideBarStyleForSecurityWarning;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (nonatomic) unsigned long long mediaCaptureDeviceIcon;
@property (nonatomic) _Bool showsNotSecureAnnotation;
@property (nonatomic) _Bool hasFocusedSensitiveFieldOnCurrentPage;

- (id)init;
- (void)setShowsReaderButton:(_Bool)arg1 showsAvailabilityText:(_Bool)arg2;
- (void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setShowsNotSecureAnnotation:(_Bool)arg1 hasFocusedSensitiveField:(_Bool)arg2;

@end
