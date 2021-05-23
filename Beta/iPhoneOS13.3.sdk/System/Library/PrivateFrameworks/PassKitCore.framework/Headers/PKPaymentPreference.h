/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PKPaymentPreference : NSObject

{
    NSMutableDictionary *_errors;
    _Bool _isReadOnly;
    _Bool _supportsDeletion;
    NSString *_title;
    NSString *_footer;
    CDUnknownBlockType _footerLinkActionBlock;
    NSArray *_preferences;
    unsigned long long _selectedIndex;
    unsigned long long _pendingIndex;
    struct _NSRange _footerLinkRange;
}

@property (retain, nonatomic) NSMutableDictionary *errors;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;
@property (nonatomic) struct _NSRange footerLinkRange;
@property (copy, nonatomic) CDUnknownBlockType footerLinkActionBlock;
@property (copy, nonatomic) NSArray *preferences;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long pendingIndex;
@property (nonatomic) _Bool isReadOnly;
@property (nonatomic, readonly) _Bool supportsDeletion;

- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(_Bool)arg4;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (id)errorsForPreference:(id)arg1;
- (void)clearAllErrors;

@end
