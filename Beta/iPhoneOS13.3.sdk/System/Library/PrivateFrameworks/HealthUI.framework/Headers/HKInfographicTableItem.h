/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface HKInfographicTableItem : NSObject

{
    _Bool _separatorHidden;
    NSAttributedString *_titleString;
    NSAttributedString *_valueString;
}

@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *valueString;
@property (nonatomic) _Bool separatorHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (id)initWithTitle:(id)arg1 value:(id)arg2 separatorHidden:(_Bool)arg3;

@end
