/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SLComposeSheetConfigurationItemObserving;

@interface SLComposeSheetConfigurationItem : NSObject

{
    id <SLComposeSheetConfigurationItemObserving> _changeObserver;
    _Bool _valuePending;
    NSString *_title;
    NSString *_value;
    CDUnknownBlockType _tapHandler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) _Bool valuePending;
@property (copy, nonatomic) CDUnknownBlockType tapHandler;

- (id)init;
- (void)setChangeObserver:(id)arg1;
- (id)changeObserver;

@end
