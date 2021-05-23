/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface TVModalPresenterConfiguration : NSObject

{
    _Bool _allowsModalOverModal;
    _Bool _allowsMenuDismissal;
    _Bool _navigationBarHidden;
    NSString *_barButtonID;
    unsigned long long _configurationType;
    long long _presentationStyle;
    UIView *_sourceView;
    struct CGSize _formSheetSize;
    struct CGSize _popoverSize;
    struct CGRect _sourceRect;
}

@property (nonatomic) _Bool allowsModalOverModal;
@property (nonatomic) _Bool allowsMenuDismissal;
@property (copy, nonatomic) NSString *barButtonID;
@property (nonatomic) unsigned long long configurationType;
@property (nonatomic) struct CGSize formSheetSize;
@property (nonatomic) struct CGSize popoverSize;
@property (nonatomic) _Bool navigationBarHidden;
@property (nonatomic) long long presentationStyle;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect sourceRect;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)_configureWithDictionary:(id)arg1;

@end
