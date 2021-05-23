/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUTitleViewUpdate : NSObject

{
    _Bool _cancelPendingUpdates;
    _Bool _speakAccessibilityTitleWhenDisplayed;
    id _value;
    unsigned long long _valueType;
    unsigned long long _styleType;
    double _lingerTimeInterval;
}

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) unsigned long long valueType;
@property (nonatomic, readonly) unsigned long long styleType;
@property (nonatomic, getter=shouldCancelPendingUpdates) _Bool cancelPendingUpdates;
@property (nonatomic) double lingerTimeInterval;
@property (nonatomic, getter=shouldSpeakAccessibilityTitleWhenDisplayed) _Bool speakAccessibilityTitleWhenDisplayed;
@property (copy, nonatomic, readonly) NSString *accessibilityTitle;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 styleType:(unsigned long long)arg3;
- (id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 glyph:(id)arg3;

@end
